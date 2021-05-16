/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 38. Поиск максимума в массиве
 Вход: 
   1 
   2
   8 
   4 
   5
   3
 Результат:
   Максимум: A[2]=8
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, nMax;
  cout << "Введите элементы массива: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  nMax = 0;
  for ( i=1; i<N; i++ )
    if ( A[i] > A[nMax] ) nMax = i;
  cout << "A[" << nMax << "]=" <<  A[nMax];
  cin.get(); cin.get();
}
