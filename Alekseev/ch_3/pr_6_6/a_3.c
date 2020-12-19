/*
Вводится последовательность ненулевых чисел, 0 - конец последовательности.       
Определить сколько раз последовательность поменяет знак.
(последов. случаных чисел n.)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A -100
#define B 100

int main()
{
    unsigned n;// Количество чисел в последовательности.
    unsigned i, k;
    int a, b;
    
    srand(time(NULL));
    printf("n = ");
    scanf("%u", &n);
    i = 1;
    k = 0;
    a = rand()%(B - A + 1) + (A);
    printf("%d \12", a);
    while (i < n && a != 0)
    {
        b = rand()%(B - A + 1) + (A);
        printf("%d \12", b);
        if ((a* b) < 0)
            k++;
        a = b;
        i++;
    }
    printf("i = %u , k = %u \12", i, k);
    
    return 0;
}