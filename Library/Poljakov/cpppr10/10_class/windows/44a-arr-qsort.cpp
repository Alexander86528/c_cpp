/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 44. Быстрая сортировка (QuickSort)
 Вход: 
   нет
 Результат:
   После сортировки: 
   6 34 44 55 67 78 82
*/ 
#include <iostream>
using namespace std;
const int N = 7;

void qSort( int A[], int nStart, int nEnd )
{
  int L, R, c, X;
  if ( nStart >= nEnd ) return;
  L = nStart; R = nEnd;
  X = A[(L+R) / 2];       
  while ( L <= R ) {         // разделение 
    while ( A[L] < X ) L++;
    while ( A[R] > X ) R--;
    if ( L <= R ) {
      c = A[L]; A[L] = A[R]; A[R] = c;
      L++; R--;
      }
    }
  qSort(A, nStart, R);   // рекурсивные вызовы 
  qSort(A, L, nEnd);
}

main()
{
  int A[N] = { 78, 6, 82, 67, 55, 44, 34 };
  int i;  
  cout << "До сортировки: \n";
  for ( i=0; i<N; i++ )
    cout << A[i] << " ";
  qSort ( A, 0, N-1 );
  cout << "\nПосле сортировки: \n";
  for ( i=0; i<N; i++ )
    cout << A[i] << " ";
  cin.get();
}
