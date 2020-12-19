
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

int main()
{
    int i, a;
    
    printf("введите целое число: a = ");
    scanf("%d", &a);
    
    srand(a);
    for(i = 1; i <= 10; i++)
        printf("ch = %d\n", rand());
    
    return 0;  
}