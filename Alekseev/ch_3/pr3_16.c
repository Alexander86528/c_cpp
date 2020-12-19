/*
Дано натуральное число N.
Определить количество цифр в числе.
*/
#include <stdio.h>

int main()
{
    unsigned n, k;
    
    printf("n = ");
    scanf("%u", &n);
    
    k = 1;
    while (n/10 > 0)
    {
        k++;
        n = n/10;
    }
    printf("k = %u \n", k);
    
    return 0;
}