/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 26. Рекурсия. Ханойские башни
 Вход: 
   нет 
 Результат:
   1 -> 3
   1 -> 2
   3 -> 2
   1 -> 3
   2 -> 1
   2 -> 3
   1 -> 3
*/ 
#include <iostream>
using namespace std;
void Hanoi ( int n, int k, int m )
{
  int p;
  if ( n == 0 ) return;
  p = 6 - k - m;
  Hanoi ( n-1, k, p );
  cout << k << " -> " << m << endl;
  Hanoi ( n-1, p, m );
}
main()
{
  Hanoi ( 3, 1, 3 );     
  cin.get();
}
