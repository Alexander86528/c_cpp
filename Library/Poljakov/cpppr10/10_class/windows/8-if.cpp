/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 8. Условные операторы
 Вход: 
   5 7
 Результат:
   7
   7
   7
   7
*/ 
#include <iostream>
using namespace std;
main()
{
  int a, b, c, M, i;
  cout << "Введите два целых числа: ";
  cin >> a >> b;  
  cout << "Максимальное число: \n";
  for ( i=1; i<=2; i++ ) { 
    if ( a > b ) 
         M = a;
    else M = b;
    cout << M << endl;  
    M = a;
    if ( b > a ) M = b;
    cout << M << endl;  
    c = a; a = b; b = c;
    }
  cin.get(); cin.get();
}
