/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 21. Процедура с параметром
 Вход: 
   99
 Результат:
   Двоичный код: 01100011
*/ 
#include <iostream>
using namespace std;
void printBin ( int n )
{
  int k;
  k = 128;
  while ( k > 0 ) {
    cout <<  n / k;
    n = n % k;
    k = k / 2; 
    } 
}
main()
{
  int n;
  cout << "Введите число: ";
  cin >> n;
  cout << "Двоичный код: ";
  printBin ( n );
  cin.get();cin.get();
}
