/*
Керниган стр. 29
*/
#include <stdio.h>

int main()
{
   int c;
   
 /* копирование входного потока в выходной */  
   
   c = getchar();
   while(c != EOF)
   {
      putchar(c);
      c = getchar();
      
   }
   
   return 0;
}