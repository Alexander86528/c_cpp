/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 26. Рекурсия. Ханойские башни
 Вход: 
   нет 
 Результат:
   1 -> 3
   1 -> 2
   3 -> 2
   1 -> 3
   2 -> 1
   2 -> 3
   1 -> 3
*/ 
#include <iostream>
using namespace std;
void printBin ( int n )
{
  if ( n == 0 ) return;
  printBin ( n / 2 );
  cout << n % 2;
}
main()
{
  int N;
  cout << "Введите натуральное число: ";
  cin >> N;
  cout << "Двоичный код ";
  printBin ( N );
  cin.get(); cin.get();
}
