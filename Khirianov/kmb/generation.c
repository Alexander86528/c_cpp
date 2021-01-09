/*
Генерация арифметических и геометрических прогрессий на C.
*/
#include <stdio.h>

int main()
{
    int start, stop, step;
    int x, sign;

    printf("Generator of progression.\n");

    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter stop: ");
    scanf("%d", &stop);
    printf("Enter step: ");
    scanf("%d", &step);

    sign = (step > 0) ? +1: -1;
    x = start;
/*
step в качестве множителя использовать нельзя т.к. переполнение.
*/
    if(step != 0) {
        while (x * sign < stop * sign) {
            printf("x = %d \n", x);
            x += step;
        }
    }
    else {
        printf("step == 0 \n");
    }
    printf("After: x = %d\n", x);

    return 0;
}