/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 28. Рекурсия. Сумма цифр
 Вход: 
   12345
 Результат:
  Сумма цифр 15
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
