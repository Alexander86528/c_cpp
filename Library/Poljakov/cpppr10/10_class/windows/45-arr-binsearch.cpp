/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 45. Двоичный поиск в массиве
 Вход: 
   нет
 Результат:
   A[3]=3
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, X, L, R, c;
  for ( i=0; i<N; i++ ) 
    A[i] = i;
  cout << "Исходный массив: \n";
  for ( i=0; i<N; i++ )  
    cout << A[i] << " ";
  cout << "\nЧто ищем? "; 
  cin >> X;
  L = 0; R = N;
  while ( L < R-1 ) {
    c = (L+R) / 2;
    if ( X < A[c] ) 
         R = c; 
    else L = c;
    }
  if ( A[L] == X ) 
       cout << "A[" << L << "]=" << X;
  else cout << "Не нашли!";
  cin.get(); cin.get();
}
