/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 17. Графы. Кратчайшие пути.
                 Алгоритм Флойда-Уоршелла
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char ASCII[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const int INF = 30000;

typedef int *pInt;
pInt *W, *P;
int N;

void ReadWeightMatrix()
{
  FILE *F;     
  int i, j;
  F = fopen ( "input_graphs.dat", "r" );
  fscanf ( F, "%d", &N );
  W = (pInt*) calloc( N, sizeof(pInt) );
  P = (pInt*) calloc( N, sizeof(pInt) );
  for ( i=0; i<N; i++ ) {
    W[i] = (int*) calloc ( N, sizeof(int) );
    P[i] = (int*) calloc ( N, sizeof(int) );
    }
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
  int i, j, k;   

  ReadWeightMatrix();

  for ( i=0; i<N; i++ ) {
    for ( j=0; j<N; j++ )
      P[i][j] = i;
    P[i][i] = -1;
    }

  for ( k=0; k<N; k++ ) 
    for ( i=0; i<N; i++ ) 
      for ( j=0; j<N; j++ ) 
        if ( W[i][k] + W[k][j] < W[i][j] ) {
           W[i][j] = W[i][k] + W[k][j];
           P[i][j] = P[k][j];
        }

  printf ( "Матрица кратчайших расстояний:\n" );
  printf ( "    " );
  for ( j=0; j<N; j++ ) printf ( "%4c", ASCII[j] );
  printf ( "\n" );
  printf ( "----" );
  for ( j=0; j<N; j++ ) printf ( "----" );
  printf ( "\n" );
  for ( i=0; i<N; i++ ) {
    printf ( "%2c |", ASCII[i] );
    for ( j=0; j<N; j++ ) {
      if ( W[i][j] == INF )
           printf ( "   ." );
      else printf ( "%4d", W[i][j] );
      }
    printf ( "\n" );
    }

  printf ( "\n" );
  printf ( "Вспомогательная матрица:\n");
  printf ( "    " );
  for ( j=0; j<N; j++ ) printf ( "%4c", ASCII[j] );
  printf ( "\n" );
  printf ( "----" );
  for ( j=0; j<N; j++ ) printf ( "----" );
  printf ( "\n" );
  for ( i=0; i<N; i++ ) {
    printf ( "%2c |", ASCII[i] );
    for ( j=0; j<N; j++ ) 
      printf ( "%4d", P[i][j] );
    printf ( "\n" );
    }

  printf ( "\n" );
  for ( i=0; i<N; i++ ) {
    printf ( "Кратчайшие маршруты из вершины %c:\n", ASCII[i] );
    for ( k=0; k<N; k++ ) 
      if ( k != i ) {
        j = k;
        while ( j != -1 ) {
          printf ( "%2c", ASCII[j] );
          if ( j != i )
            printf ( " <- " );
          j = P[i][j];
          }
        printf ( "\n" );
        }
    }

  getchar();
}
