/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 7. Псевдослучайные числа
 Вход: 
   нет 
 Результат:
   <случайное целое от 10 до 20 включительно>
   <случайное вещественное от [1 до 2)>
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
   int a = 10, b = 20, rAB;
   float x = 1, y = 2, rXY;
   rAB = a + rand()%(b-a+1);
   cout << rAB << endl;
   rXY = x + (y-x)*rand()/RAND_MAX;
   cout << rXY << endl;     
   cin.get();
}
