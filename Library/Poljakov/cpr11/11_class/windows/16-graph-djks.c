/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 16. Графы. Кратчайшие пути. Алгоритм Дейкстры
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char ASCII[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const int INF = 30000;

typedef int *pInt;
pInt *W;
int N;

void ReadWeightMatrix()
{
  FILE *F;     
  int i, j;
  F = fopen ( "input_graphs.dat", "r" );
  fscanf ( F, "%d", &N );
  W = (pInt*) calloc( N, sizeof(pInt) );
  for ( i=0; i<N; i++ )
    W[i] = (int*) calloc ( N, sizeof(int) );
  printf ( "Весовая матрица графа: \n" );
  printf ( "    " );
  for ( j=0; j<N; j++ ) 
     printf ( "%4c", ASCII[j] );
  printf ( "\n" );
  printf ( "----" );
  for ( j=0; j<N; j++ ) printf ( "----" );
  printf ( "\n" );
  for ( i=0; i<N; i++ ) {
    printf ( "%2c |", ASCII[i] );
    for ( j=0; j<N; j++ ) {
      fscanf ( F, "%d", &W[i][j] );
      if ( W[i][j] < 0 ) {
        W[i][j] = INF;
        printf ( "   ." );
        }
      else printf ( "%4d", W[i][j] );
      }
    printf ( "\n" );
    }
  fclose(F);
  printf ( "\n" );
}

main ()
{
  int i, j, k, minDist, kMin;   
  bool *active;
  int *R, *P;

  ReadWeightMatrix();
  active = (bool*) calloc ( N, sizeof(bool) );
  R = (int*) calloc ( N, sizeof(int) );
  P = (int*) calloc ( N, sizeof(int) );

  for ( i=0; i<N; i++ ) {
    active[i] = true;
    R[i] = W[0][i];
    P[i] = 0;
    }
  active[0] = false;
  P[0] = -1;

  for ( i=0; i<N-1; i++ ) {
    minDist = INF+100;    
    for ( j=0; j<N; j++ )
      if ( active[j] && R[j] < minDist) {
        minDist = R[j];
        kMin = j;
        }
    active[kMin] = false;
    for ( j=0; j<N; j++ )
      if ( R[kMin]+W[kMin][j] < R[j] ) {
        R[j] = R[kMin]+W[kMin][j];
        P[j] = kMin;
        }
  }
  
  printf ( "Вспомогательные массивы:\n");
  printf ( "   ");
  for ( i=0; i<N; i++ ) printf ( "%5c", ASCII[i] );
  printf ( "\n" );
  printf ( "---" );
  for ( i=0; i<N; i++ ) printf ( "-----" );
  printf ( "\n" );
  printf ( "R |" );
  for ( i=0; i<N; i++ ) printf ( "%5d", R[i] );
  printf ( "\n" );
  printf ( "P |" );
  for ( i=0; i<N; i++ ) 
    if ( P[i] < 0 ) 
      printf ( "    ." );
    else 
      printf ( "%5c", ASCII[P[i]] );
  printf ( "\n" );

  printf ( "\n" );
  printf ( "Кратчайший маршрут из вершины A в вершину %c:\n", ASCII[N-1] );
  i = N-1;
  while ( i != -1 ) {
    printf ( "%2c", ASCII[i] );
    if ( i != 0 )
      printf ( " <- " );
    i = P[i];
    }

  getchar();
}
