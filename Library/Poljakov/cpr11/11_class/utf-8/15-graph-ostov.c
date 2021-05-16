/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 15. Графы. Построение минимального остовного дерева графа
*/
#include <stdio.h>
#include <stdlib.h>

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
  int i, j, k, c, minDist, iMin, jMin;   
  int *col;
  pInt *ostov;

  ReadWeightMatrix();
  col = (int*) calloc ( N, sizeof(int) );
  ostov = (pInt*) calloc ( N, sizeof(pInt) );
  for ( i=0; i<N; i++ )
    ostov[i] = (int*) calloc ( 2, sizeof(int) );

  for ( i=0; i<N; i++ ) col[i] = i;
  
  for ( k=0; k<N-1; k++ ){
    minDist = INF+100;
    for ( i=0; i<N; i++ )
      for ( j=0; j<N; j++ )
        if ( col[i] != col[j] && W[i][j] < minDist ) 
          {
            iMin = i; jMin = j; minDist = W[i][j];
          }
    ostov[k][0] = iMin;
    ostov[k][1] = jMin;
    c = col[jMin];
    for ( i=0; i<N; i++ )
      if ( col[i] == c ) 
        col[i] = col[iMin];
    }

  printf ( "Минимальное остовное дерево графа: \n" );
  for ( i=0; i<N-1; i++ )
    printf ( "(%c,%c)\n", ASCII[ostov[i][0]], ASCII[ostov[i][1]] );

  getchar();
}
