
#include <stdio.h>

int main()
{
    int a;
    
    a = getchar();
    while(a != '\n')
    {
        putchar(a);
        a = getchar();
    }
    putchar('\n');
    
    return 0;
}