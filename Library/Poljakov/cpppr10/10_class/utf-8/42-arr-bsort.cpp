/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 42. Сортировка пузырьком
 Вход: 
   1 
   3
   5 
   2 
   4
 Результат:
   После сортировки:
   1 2 3 4 5
*/ 
#include <iostream>
using namespace std;
const int N = 5;
main()
{
  int A[N];
  int i, j, c;
  cout << "Введите элементы массива: \n";
  for ( i=0; i<N; i++ ) 
    cin >> A[i];
  for ( i=0; i<N-1; i++ )
    for ( j=N-2; j>=i; j-- )
      if ( A[j] > A[j+1] ) {
        c=A[j]; A[j]=A[j+1]; A[j+1]=c;
        }  
  cout << "После сортировки: \n";
  for ( i=0; i<N; i++ )
    cout << A[i] << " ";
  cin.get(); cin.get();
}
