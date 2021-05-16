/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 53. Рекурсивный перебор
 Вход: 
   нет 
 Результат: 
   <64 слова>
*/ 
#include <iostream>
#include <sstream>
using namespace std;
void TumbaWords( string A, string& w, int N)
{
  int i;     
  if ( N == w.size() ) {
    cout << w << endl;
    return;
    }
  for ( i=0; i<A.size(); i ++ ) {
    w[N] = A[i];
    TumbaWords(A, w, N+1);
    }
}
main()
{
  string word = "...";
  TumbaWords("ЫШЧО", word, 0);
  cin.get(); 
}
