/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 20. Программа с процедурой
 Вход: 
   -1
 Результат:
   Ошибка программы
*/ 
#include <iostream>
using namespace std;
void Error ()
{
  printf ( "Ошибка программы" );
}
main()
{
  int n;
  cout << "Введите число: ";
  cin >> n;
  if ( n < 0 )
    Error(); 
  cin.get();cin.get();
}