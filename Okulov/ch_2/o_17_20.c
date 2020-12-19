
#include <stdio.h>
int main()
{
    int ch;
    printf("Расстояние в см. ch = ");
    scanf("%d", &ch);
    printf("Расстояние в метрах ch = %d \n", ch/100);
    
    printf("Масса в килограммах ch = ");
    scanf("%d", &ch);
    printf("Масса в центнерах ch = %d \n", ch/100);
    
    printf("Масса в килограммах ch = ");
    scanf("%d", &ch);
    printf("Масса в тоннах ch = %d \n", ch/1000);
    
    printf("Расстояние в метрах ch = ");
    scanf("%d", &ch);
    printf("Расстояние в км. ch = %d \n", ch/1000 );
    
    return 0;
}