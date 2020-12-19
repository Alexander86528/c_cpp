/*
Заменяет символ на следующий в таблице ASCII, 
кроме пробела.
*/
#include <stdio.h>
#define SPACE ' '
/*кавычка пробел кавычка*/

int main()
{
    char ch;
    
//    ch = getchar();
    while ((ch = getchar()) != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else 
            putchar(ch + 1);
//        ch = getchar();
    }
    putchar(ch);
    
    return 0;
}
