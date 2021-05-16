/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 6. Форматный вывод
 Вход: 
   нет 
 Результат:
   >123<  
   >  123<  
   >123  <
   >123.456<
   >   123.456<
   >    123.46<  
   >  1.2E+002<
   >       123<
*/
#include <iostream>
#include <iomanip>
using namespace std;
main()
{
   int a = 123;
   float x = 123.456;
   cout << a << endl;
   cout << ">" << setw(5) << a << "<\n";
   cout << ">" << setw(5) << left << a << "<\n";
   cout << ">" <<  x << "<\n";
   cout << ">" << right; 
   cout.width(10);
   cout.precision(6);
   cout << x << "<\n";
   cout << ">"; 
   cout.width(10);
   cout.precision(5);
   cout << x << "<\n";
   cout << ">"; 
   cout.width(10);
   cout.precision(2);
   cout <<  x << "<\n";
   cout << ">"; 
   cout.width(10);
   cout.precision(3);
   cout << x << "<\n";
   cin.get();
}
