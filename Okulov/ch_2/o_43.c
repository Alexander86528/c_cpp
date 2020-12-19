#include <stdio.h>

int main()
{
    int y;

    puts("(99<Y<1000) & ((y/10)%10) != 0");
    printf("Y = ");
    scanf("%d", &y);
    while(y<100 || y>999 || ((y/10)%10)==0)
    {
        puts("(99<Y<1000) & ((y/10)%10) != 0");
        printf("Y = ");
        scanf("%d", &y);
    }
    printf(" X = %d\n", ((y/10)%10)*100+(y/100)*10+y%10);

    return 0;
}