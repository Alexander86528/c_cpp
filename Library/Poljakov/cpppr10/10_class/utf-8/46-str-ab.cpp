/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 46. Посимвольная обработка строк
 Вход: 
   аабб
 Результат:
   бббб
*/ 
#include <iostream>
using namespace std;
main()
{
  string s;
  int i;
  cout << "Введите строку: ";
  getline ( cin, s );
  for ( i=0; i<s.size(); i++ ) 
    if ( s[i] == 'а' )
      s[i] = 'б';
  cout << s;
  cin.get(); 
}
