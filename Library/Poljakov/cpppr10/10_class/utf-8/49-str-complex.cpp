/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 49. Разбор строки
 Вход: 
   Василий Алибабаевич Хрюндиков
 Результат:
   Хрюндиков В.А.
*/ 
#include <iostream>
using namespace std;
main()
{
  string s, name, name2;
  int n;
  cout << "Введите имя, отчество и фамилию: ";
  getline ( cin, s );
  n = s.find(' ');
  name = s.substr(0,1) + '.';    // первая буква имени
  s = s.substr ( n+1 );
  n = s.find(' ');
  name2 = s.substr(0,1) + '.';   // первая буква отчества
  s = s.substr ( n+1 ); // осталась фамилия 
  s = s + ' ' + name + name2;
  cout << s;
  cin.get(); 
}
