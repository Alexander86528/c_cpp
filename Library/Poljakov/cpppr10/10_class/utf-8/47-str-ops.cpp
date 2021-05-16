/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 47. Операции со строками
 Вход: 
   нет 
 Результат:
   Привет, Вася!
   34567
   0129
   012ABC3456789
*/ 
#include <iostream>
using namespace std;
main()
{
  string s, s1, s2;
  s1 = "Привет"; 
  s2 = "Вася"; 
  s  = s1 + ", " + s2 + "!"; 
  cout << s << endl;
  s = "0123456789";
  s1 = s.substr ( 3, 5 );
  cout << s1 << endl;
  s = "0123456789";
  s.erase ( 3, 6 );
  cout << s << endl;
  s = "0123456789";
  s.insert ( 3, "ABC" );
  cout << s << endl;
  s1 = "pass";
  s2 = "Pass";
  if ( s1 == s2 )
    cout << "Пароль " << s1 << " подошел!\n";
  else  
    cout << "Пароль " << s1 << " не подошел...\n";
  cin.get(); 
}
