/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 39. Реверс массива
 Вход: 
   1 
   2
   3 
   4 
   5
 Результат:
   После реверса:
   5 4 3 2 1
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, c;
  cout << "Введите элементы массива: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  for ( i=0; i<(N/2); i++ ) {
    c = A[i];
    A[i] = A[N-1-i];
    A[N-1-i] = c;
    }
  cout << "После реверса: \n";
  for ( i=0; i<N; i++ )
    cout << A[i] << " ";
  cin.get(); cin.get();
}