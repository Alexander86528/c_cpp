
#include <stdio.h>

int main()
{
    int a;
    
    while((a = getchar()) != EOF)
        putchar(a);
    
    putchar('\n');
    
    return 0;
}