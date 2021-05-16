/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 25. Логическая функция
 Вход: 
   5
   7
   12
 Результат:
   5 - простое число
   7 - простое число
*/ 
#include <iostream>
using namespace std;
bool isPrime ( int n )
{
  int count, k;
  count = 0;
  k = 2;
  while ( k*k <= n  &&  count == 0) {
    if ( n % k == 0 ) 
       count ++;
    k ++;
    }
  return (count == 0);
}
main()
{
  int n;
  cout << "Введите число: ";
  cin >> n;
  while ( isPrime ( n ) ) {
    cout << n << " - простое число\n";
    cout << "Введите число: ";
    cin >> n;
    }
  cin.get();cin.get();
}
