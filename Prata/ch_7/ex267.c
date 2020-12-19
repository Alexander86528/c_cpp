/*
Меняет символы букв на следующий в 
таблице ASCII(при помощи ф-ии isalpha(), кроме знаков.
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
  char ch;

  while ((ch = getchar()) != ' /n')
  {
    if (isalpha(ch))
      putchar(ch + 1);
    else
      putchar(ch);
  }
  putchar(ch);

  return 0;
}
