/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 3. Операторы ввода, вывода, присваивания
 Вход: 
   5 7
 Результат:
   12
*/
#include <iostream>
using namespace std;
main()
{
   int a, b, c;   
   cin >> a >> b;   
   c = a + b;
   cout << c;
   cin.get(); cin.get();
}

