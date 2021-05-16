/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 21. Динамическое программирование.
                 Размен монет - количество вариантов
*/
#include <stdio.h>
const int MMAX = 4, WMAX = 100;

int RazmenPerebor ( int P[MMAX+1], int N )
{
  int i1, i2, i5, i10, K10, K5, K2;
  long int count;

  count =  0;
  for ( i10=0; i10<=(N/P[4]); i10++ ) {
    K10 = N - i10*P[4];
    for ( i5=0; i5<=(K10/P[3]); i5++ ) {
      K5 = N - i10*P[4] - i5*P[3];
      for ( i2=0; i2<=(K5/P[2]); i2++ ) {
        K2 = N - i10*P[4] - i5*P[3] -i2*P[2];
        if ( K2 % P[1] == 0 )
          count ++;
        } 
      }
    }
  return count;
}

void showTable ( long int T[MMAX+1][WMAX+1], int P[MMAX+1], int N )
{
  int i, w;
  printf ( "   " );
  for ( w=0; w<=N; w++ ) printf ( "%3d", w );
  printf ( "\n" );
  for ( i=1; i<=N+2; i++ ) printf ( "---" );
  printf ( "\n" );
  for ( i=1; i<=MMAX; i++ ) {
    printf ( "%2d:", P[i] );
    for ( w=0; w<=N; w++ ) printf ( "%3d", T[i][w] );
    printf ( "\n" );
    }
  printf ( "\n" );
}

main ()
{
  long int T[MMAX+1][WMAX+1];
  int P[MMAX+1];
  int i, w, k, N;

  P[0]=0; P[1]=1; P[2]=2; P[3]=5; P[4]=10;

  printf ( "Имеются монеты достоинством " );
  for ( i=1; i<=MMAX; i++ ) {
    if ( i > 1 )
      if ( i == MMAX ) printf ( " и " );
      else printf ( ", " );
    printf ( "%d", P[i] );
    if ( i == MMAX )  printf ( " руб." );
    }

  do {
    printf ( "\nВведите сумму для размена (1..%d): ", WMAX );
    scanf ( "%d", &N );
    }
  while ( ! (1 <= N && N <= WMAX) );

  for ( i=P[1]; i<=N; i++ )
    T[1][i] = 1;

  for ( i=1; i<=MMAX; i++ )
    T[i][0] = 1;

  for ( i=2; i<=MMAX; i++ ) {
    for ( w=1; w<=N; w++ ) {
      T[i][w] = T[i-1][w];
      if ( w >= P[i] )
        T[i][w] = T[i][w] + T[i][w-P[i]];
      }
    }

  printf ( "\n" );
  showTable ( T, P, N );

  printf ( "Число вариантов размена: %d\n", T[MMAX][N] );
  printf ( "Проверка методом перебора... \n" );
  printf ( "  Число вариантов размена: %d", RazmenPerebor(P,N) );

  getchar();
}
