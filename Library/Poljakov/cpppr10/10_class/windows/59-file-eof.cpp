/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 59. Обработка неизвестного количества чисел
 Вход: 
   целые числа в файле input_2.txt в текущем каталоге  
 Результат: 
   сумма чисел в файле output_2.txt в текущем каталоге    
*/ 
#include <iostream>
#include <fstream>
using namespace std;
main()
{
  ifstream Fin;
  ofstream Fout;
  int x, sum;
  Fin.open ( "input_2.txt" );
  if ( Fin ) {
    sum = 0;
    while ( Fin >> x )
       sum += x;
    Fin.close();
    Fout.open ( "output_2.txt" );
    Fout << sum;
    Fout.close();
    cout << "Данные сохранены в файле 'output_2.txt'.";  
    }
  else  
    cout << "Не удалось открыть файл 'input_2.txt'.";
  cin.get();
}
