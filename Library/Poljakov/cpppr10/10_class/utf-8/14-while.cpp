/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 14. Цикл с условием
 Вход: 
   2
 Результат:
   привет
   привет
*/ 
#include <iostream>
using namespace std;
main()
{
  int N, k;
  cout << "Сколько раз сделать? ";
  cin >> N;
  k = 0;
  while ( k < N ) {
    cout << "привет\n";
    k ++;
    }
  cin.get(); cin.get();
}
