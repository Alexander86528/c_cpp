/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 57. Сумма элементов матрицы
 Вход: 
   нет 
 Результат:
   Сумма элементов 54
*/ 
#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
  const int N = 3, M = 4;
  int A[N][M];
  int i, j, sum;
  for ( i=0; i<N; i++ ) {
    for ( j=0; j<M; j++ ) {
      A[i][j] = i + j + 2;
      cout.width(3);
      cout << A[i][j];
      }
    cout << endl;
    }
  sum = 0;  
  for ( i=0; i<N; i++ ) 
    for ( j=0; j<M; j++ ) 
      sum += A[i][j];
  cout << "Сумма элементов " << sum;
  cin.get();
}
