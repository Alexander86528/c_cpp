
#include <stdio.h>

int main()
{
    int a;
    
    while((a = getchar()) != '~')
        putchar(a);
    
    putchar('\n');
    
    return 0;
}