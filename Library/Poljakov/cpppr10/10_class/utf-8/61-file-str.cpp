/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 61. Обработка символьных строк в файле
 Вход: данные о собаках в файле input_4.txt 
       в текущем каталоге
   <кличка> <возраст> <порода> 
 Результат: данные о собаках, которым < 5 лет, 
       в файле output_4.txt в текущем каталоге
*/ 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main()
{
  string s, s1;    
  int p, age;  
  ifstream Fin;
  ofstream Fout;

  Fin.open ( "input_4.txt" );
  if ( Fin ) {
    Fout.open ( "output_4.txt" );
    while ( getline(Fin, s) ) {
      p = s.find( ' ' );
      s1 = s.substr ( p+1 );
      age = atoi ( s1.c_str() );
      if ( age < 5 )
        Fout << s << endl;     
      }     
    Fout.close();
    Fin.close();
    cout << "Данные сохранены в файле 'output_4.txt'.";  
    }
  else  
    cout << "Не удалось открыть файл 'input_4.txt'.";
  cin.get();
}
