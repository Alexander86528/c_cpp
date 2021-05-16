/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 51. Строки в процедуре
 Вход: 
   нет 
 Результат: 
   A12B.A12B.A12B
*/ 
#include <iostream>
using namespace std;
void replaceAll ( string &s, string wOld, string wNew )
{
  string res = "";
  int p, len = wOld.size();
  while ( s.size() > 0 ) {
    p = s.find ( wOld );
    if ( p < 0 ) {
      res = res + s; 
      return;
      }  
    if ( p > 0 ) 
      res = res + s.substr ( 0, p );
    res = res + wNew;
    if ( p+len > s.size() ) 
         s = "";         
    else s.erase ( 0, p+len );
    }
  s = res;
}
main()
{
  string s = "12.12.12";
  replaceAll ( s, "12", "A12B" );
  cout << s;    
  cin.get(); 
}
