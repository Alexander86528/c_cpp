/*
Вычислить сумму отрицательных элементов последовательности из N произвольных чисел.            
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned n, i;
    int  a, b, s, ch;
    
    srand(time(NULL));
    a = -100;//Диапазон чисел.
    b = 100;
    
    printf("количество элементов n = ");         
    scanf("%u", &n);
    i = 1;
    s = 0;
    while (i <= n)
    {
        ch = rand()%(b - (a) + 1) + (a);
        printf("ch = %d \n", ch);
        if (ch < 0)
            s = s + ch;
        i++;
    }
    printf("Сумма отрицательных чисел: \n");
    printf("s = %d \n", s);
  
    return 0;
}