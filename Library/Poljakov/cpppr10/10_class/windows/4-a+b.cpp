/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 4. Операторы ввода, вывода, присваивания
 Вход: 
   5 7
 Результат:
   5+7=12
*/
#include <iostream>
#include <iomanip>
using namespace std;
main()
{
   int a, b, c;   
   cout << "Введите два целых числа: ";
   cin >> a >> b;   
   c = a + b;
   cout << a << "+" << b << "=" << c;
   cin.get(); cin.get();
}
/*
#include <iostream>
using namespace std;
main()
{
   int a, b, c;   
   cout << "Ввеите два целых числа: ";
   cin >> a >> b;   
   c = a + b;
   cout.width(5);
   cout << a << "+" << b << "=" << c;
   cin.get(); cin.get();
}
*/

