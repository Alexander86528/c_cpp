/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 60. Сортировка массива из файла
 Вход: 
   массив в файле input_3.txt в текущем каталоге 
 Результат: 
   отсортированный массив в файле output_3.txt 
   в текущем каталоге
*/ 
#include <iostream>
#include <fstream>
using namespace std;
main()
{
  const int MAX = 100;    
  int A[MAX];
  int i, j, c, N;
  ifstream Fin;
  ofstream Fout;

  Fin.open ( "input_3.txt" );
  if ( Fin ) {
    N = 0;
    while ( N < MAX  &&  Fin >> A[N] )
        N ++;
    Fin.close();
    for ( i=0; i<N-1; i++ )
      for ( j=N-2; j>=i; j-- )
        if ( A[j] > A[j+1] ) {
          c = A[j]; A[j] = A[j+1]; A[j+1] = c;   
          }
    Fout.open ( "output_3.txt" );
    for ( i=0; i<N; i++ )
      Fout << A[i] << endl;
    Fout.close();
    cout << "Данные сохранены в файле 'output_3.txt'.";  
    }
  else  
    cout << "Не удалось открыть файл 'input_3.txt'.";
  cin.get();
}
