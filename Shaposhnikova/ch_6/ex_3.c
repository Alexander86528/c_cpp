
#include <stdio.h>

int main()
{
    char str[] = "Hello";
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
        printf("%c-", str[i]);
    printf("%c%c %c", '\b', '\0', '\n');
/*
'\b' - возврат курсора на один символ назад с удалением этого символа.
*/
    for(i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
        putchar('-');
    }
//  printf("%c%c %c", '\b', '\0', '\n');
    putchar('\b');
//    putchar('\0');
    putchar(' ');
    putchar('\n');
    
    return 0;
}