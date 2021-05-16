/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 54. Сортировка строк
 Вход:
   пароход
   паровоз  
   пар
   Пар
   пАр
 Результат:
   Пар
   пАр
   пар
   паровоз
   пароход
*/ 
#include <iostream>
#include <sstream>
using namespace std;
main()
{
  const int N = 5;
  string s1, S[N];
  int i, j;
  cout << "Введите строки: \n";
  for ( i=0; i<N; i++ )
    getline ( cin, S[i] );    
  for ( i=0; i<N-1; i++ )
    for ( j=N-2; j>=i; j-- )
      if ( S[j] > S[j+1] ) {
        s1 = S[j];
        S[j] = S[j+1];
        S[j+1] = s1;
        }     
  cout << "После сортировки: \n";
  for ( i=0; i<N; i++ )
    cout << S[i] << "\n";
  cin.get(); 
}
