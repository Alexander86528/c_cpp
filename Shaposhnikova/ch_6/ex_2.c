
#include <stdio.h>

int main()
{
    char str[] = "Hello char C";
    int i;
    
    printf("При помощи ф-ии printf(): %s\n", str);
    
    printf("При помощи ф-ии putchar(): ");
    
    for(i = 0; str[i] != '\0'; i++)
        putchar(str[i]);
    
    putchar('\n');
    
    return 0;
}