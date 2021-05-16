/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 11. Оператор выбора
 Вход: 
   3
 Результат:
   март
*/ 
#include <iostream>
using namespace std;
main()
{
  int m;
  cout << "Введите номер месяца: ";
  cin >> m;
  switch ( m ) { 
   case 1:  cout << "январь"; break;
   case 2:  cout << "февраль"; break;    
   case 3:  cout << "март"; break;
   case 4:  cout << "апрель"; break;
   case 5:  cout << "май"; break;
   case 6:  cout << "июнь";
       cout << ", июнь!";         
       break;
   case 7:  cout << "июль"; break;
   case 8:  cout << "август"; break;
   case 9:  cout << "сентябрь"; break;
   case 10: cout << "октябрь"; break;
   case 11: cout << "ноябрь"; break;
   case 12: cout << "декабрь"; break;
   default: cout << "ошибка"; break;
   }         
  cin.get(); cin.get();
}
