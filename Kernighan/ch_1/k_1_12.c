 /*
Вывод входного потока по одному слову.
*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int ch, state;
  state = OUT;
  
  while((ch = getchar()) != EOF)
  {
    if(ch == ' ' || ch == '\t' || ch == '\n')
    {
      if(state == IN)
      {
	putchar('\n');
	state = OUT;
      }
    }
    else
      if(state == OUT)
      {
	state = IN;
	putchar(ch);
      }
      else
	putchar(ch);
  }
	
  
  return 0;
}
