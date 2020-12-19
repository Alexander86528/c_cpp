
#include <stdio.h>

int main()
{
    unsigned n, max, i;
    unsigned k;
    
    printf("n = ");
    scanf("%u", &n);
    printf("n = %u \n", n);
    
    for(i = 1, max = k = 0; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            k++;
            if(i > max)
                max = i;
        }
    }
    printf("количество делителей k = %u \n", k);                  
    printf("наибольший max = %u \n", max);
    
    return 0;
}
