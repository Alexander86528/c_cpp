/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 32. Заполнение и вывод массива
 Вход: 
   нет
 Результат:
   0 1 4 9 16 
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i;
  for ( i=0; i<N; i++ ) 
    A[i] = i*i;
  for ( i=0; i<N; i++ ) 
    cout << A[i] << " ";    
  cin.get();  
}
