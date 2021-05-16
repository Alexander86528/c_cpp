/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 37. Линейный поиск в массиве c break
 Вход: 
   1 
   2
   3 
   4 
   5
   3
 Результат:
   A[2]=3
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, X, nX;
  cout << "Введите элементы массива: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  cout << "Что ищем? "; 
  cin >> X;
  nX = -1;
  for ( i=0; i<N; i++ )
    if ( A[i] == X ) {
      nX = i;
      break;
      }
  if ( nX >= 0 )  
       cout << "A[" << i << "]=" << X;
  else cout << "Не нашли!";
  cin.get(); cin.get();
}
