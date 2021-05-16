/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 41. Отбор элементов по условию
 Вход: 
   5
   1 
   2
   3 
   4 
   5
 Результат:
   Чётные элементы:
   2 4
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N], B[N];
  int i, count;
  cout << "Введите элементы массива: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  count = 0;
  for ( i=0; i<N; i++ ) 
    if ( A[i] % 2 == 0 ) {
      B[count] = A[i];
      count ++;
      }  
  cout << "Чётные элементы: \n";
  for ( i=0; i<count; i++ )
    cout << B[i] << " ";
  cin.get(); cin.get();
}
