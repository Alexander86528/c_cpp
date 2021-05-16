/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 30. Рекурсия. Факториал
 Вход: 
   2
 Результат:
   -> N=2
   -> N=1
   <- N=1
   <- N=2
   2
*/ 
#include <iostream>
using namespace std;
int Fact ( int N )
{
  int F;   
  cout << "-> N=" << N << "\n";
  if ( N <= 1 ) 
       F = 1;
  else F = N * Fact(N - 1);
  cout << "<- N=" << N << "\n";
  return F;
}
main()
{
  int N;
  cout << "Введите натуральное число: ";
  cin >> N;
  cout << Fact(N);
  cin.get(); cin.get();
}
