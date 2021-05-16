/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 12. Очередь. Заливка области
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int XMAX = 5, YMAX = 5, NEW_COLOR = 2;

typedef struct {
       int x, y;
     } TPoint;   
     
TPoint Point( int x, int y )
{
  TPoint P;      
  P.x = x; P.y = y;
  return P;
}
    
typedef struct {
       TPoint *data;
       int capacity;
       int size;
     } TQueue;

void InitQueue( TQueue *pQ, int capacity )
{
  pQ->data = (TPoint*) calloc ( capacity, sizeof(TPoint) ); 
  pQ->capacity = capacity;
  pQ->size = 0;
}

void Put ( TQueue *pQ, TPoint P )
{
  pQ->size ++;
  if ( pQ->size > pQ->capacity ) {
    pQ->capacity += 10;    
    pQ->data = (TPoint*) realloc ( pQ->data, sizeof(TPoint)*pQ->capacity  );
    }
  pQ->data[pQ->size-1] = P;
}

TPoint Get ( TQueue *pQ )
{
  TPoint P = pQ->data[0];
  int i;
  pQ->size --;
  for ( i=0; i<pQ->size; i++ )
    pQ->data[i] = pQ->data[i+1];      
  return P;
}

bool isEmpty( TQueue Q )
{
  return Q.size == 0;
}

void ShowQueue ( TQueue Q )
{
  int i;
  for ( i=0; i<Q.size; i++ )
     printf ( "(%d,%d) ", Q.data[i].x, Q.data[i].y );
  printf ( "\n" );
}

void ShowMatrix ( int A[YMAX][XMAX] )
{
  int i, j;
  printf ( "--------------------\n" );
  for ( i=0; i<YMAX; i++ ) {
    for ( j=0; j<XMAX; j++ ) 
      printf ( "%3d", A[i][j] );
    printf ( "\n" );
    }
  printf ( "--------------------\n" );
}

main ()
{
  int A[YMAX][XMAX];   
  TQueue Q;
  FILE *F;
  int i, j, x0, y0, color;
  TPoint pt;

  F = fopen ( "input_map.dat", "r" );
  for ( i=0; i<YMAX; i++ ) 
    for ( j=0; j<XMAX; j++ )
      fscanf ( F, "%d", &A[i][j] );
  fclose(F);
 
  printf ( "Исходная матрица:\n" );
  ShowMatrix ( A );
     
  InitQueue ( &Q, 5 );
  y0 = 0; x0 = 1;
  color = A[y0][x0];
  Put ( &Q, Point(x0,y0) );

  printf ( "Изменение очереди:\n" );
  ShowQueue ( Q );

  while ( ! isEmpty(Q) ) {
    pt = Get ( &Q );
    if ( A[pt.y][pt.x] == color ) {
      A[pt.y][pt.x] = NEW_COLOR;
      if ( pt.x > 0 ) Put(&Q, Point(pt.x-1,pt.y));
      if ( pt.y > 0 ) Put(&Q, Point(pt.x,pt.y-1));
      if ( pt.x < XMAX-1 ) Put(&Q, Point(pt.x+1,pt.y));
      if ( pt.y < YMAX-1 ) Put(&Q, Point(pt.x,pt.y+1));
      }
    ShowQueue ( Q );
    }

  printf ( "Матрица после заливки:\n" );
  ShowMatrix ( A );

  getchar();
}
