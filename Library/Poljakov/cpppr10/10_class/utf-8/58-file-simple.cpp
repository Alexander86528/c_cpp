/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 58. Чтение и запись в файл
 Вход: 
   целое число в файле intput_1.txt в текущем каталоге 
 Результат: 
   удвоенное число в файле output_1.txt в текущем каталоге
*/ 
#include <iostream>
#include <fstream>
using namespace std;
main()
{
  ifstream Fin;
  ofstream Fout;
  int x;
  Fin.open ( "input_1.txt" );
  if ( Fin ) {
    Fin >> x;
    Fin.close();
    Fout.open ( "output_1.txt" );
    Fout << 2*x;
    Fout.close();
    cout << "Данные сохранены в файле 'output_1.txt'.";  
    }
  else  
    cout << "Не удалось открыть файл 'input_1.txt'.";
  cin.get();
}
