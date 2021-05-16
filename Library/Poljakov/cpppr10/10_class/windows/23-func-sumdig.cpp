/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 23. Функция
 Вход: 
   12345
 Результат:
   Сумма цифр 15
*/ 
#include <iostream>
using namespace std;
int sumDigits ( int n)
{ 
  int sum = 0;
  while ( n != 0 ) {
    sum += n % 10;
    n = n / 10;
    } 
  return sum;
}
main()
{
  int N;
  cout << "Введите целое число: ";
  cin >> N;
  cout << "Сумма цифр " << sumDigits(N);
  cin.get();cin.get();
}
