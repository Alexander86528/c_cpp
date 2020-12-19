
#include <stdio.h>

int main()
{
    double x;
    printf("x = ");
    scanf("%lf", &x);
    
    if(x >= -3 && x <= 7)
        printf("x >= -3 && x <= 7");
    else
        printf("x < -3  || x > 7");
    
    return 0;
}