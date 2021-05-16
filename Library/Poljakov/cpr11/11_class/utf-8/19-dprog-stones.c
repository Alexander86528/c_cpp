/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 19. Динамическое программирование.
                 Задача о куче
*/
#include <stdio.h>
const int WMAX = 8, NStones = 4;

int max ( int a, int b )
{
  if ( a > b ) 
       return a;
  else return b;
}

void showTable ( long int T[NStones+1][WMAX+1],
                 int P[NStones+1] )
{
  int i, w;
  printf ( "   " );
  for ( w=0; w<=WMAX; w++ ) printf ( "%3d", w );
  printf ( "\n" );
  printf ( "---" );
  for ( i=0; i<=WMAX; i++ ) printf ( "---" );
  printf ( "\n" );
  for ( i=1; i<=NStones; i++ ) {
    printf ( "%2d:", P[i] );
    for ( w=0; w<=WMAX; w++ )
      printf ( "%3d", T[i][w] );
    printf ( "\n" );
    }
  printf ( "\n" );
}

main ()
{
  int w, i, w0, t0, t1;
  long int T[NStones+1][WMAX+1];
  int P[NStones+1];
  
  for ( i=0; i<=NStones; i++ ) 
    for ( w=0; w<=WMAX; w++ )  
      T[i][w] = 0;

  P[0] = 0; P[1] = 2; P[2] = 4; 
  P[3] = 5; P[4] = 7;

  for ( i=1; i<=NStones; i++ ) 
    T[i][0] = 0;
  for ( w=P[1]; w<=WMAX; w++ ) 
    T[1][w] = P[1];

  for ( i=2; i<=NStones; i++ ) 
    for ( w=1; w<=WMAX; w++ ) {
      t0 = T[i-1][w];
      if ( w >= P[i] ) {
        t1 = T[i-1][w-P[i]] + P[i];
        T[i][w] = max(t0, t1);
        }
      else T[i][w] = t0;
      }

  showTable ( T, P );

  printf ( "Оптимальное решение: w = %d\n", T[NStones][WMAX] );
  printf ( "Берем камни: \n" );
  i = NStones;
  w = WMAX;
  w0 = T[NStones][WMAX];
  while ( w0 > 0 ) {
    while (i > 0  &&  T[i][w] == w0) 
      i --;
    if ( i == 0 ) {
      printf ( "%d", w0 );
      break;
      }
    printf ( "%d ", P[i+1] );
    w0 = w0 - P[i+1];
    w = w0;
    }

  getchar();
}
