/*
Напишите программу для копирования входного потока в выходной с заменой каждой строки, состоящей из одного или нескольких пробелов, одним пробелом.
*/
#include <stdio.h>

int main()
{
   int ch, fl;
   
   fl = 'a';
   while((ch = getchar()) != EOF)
   {
      if(ch != ' ')
         putchar(ch);
      if(ch == ' ')
         if(fl != ' ')
            putchar(ch);
      fl = ch;
   }
   
   return 0;
}