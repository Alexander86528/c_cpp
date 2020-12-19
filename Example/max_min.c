
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, a, b, c, ch, a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, ab;
    a1=a2=a3=a4=a5=b1=b2=b3=b4=b5=ab=0;
    
    srand(time(NULL));
    
    printf("введите а = ");
    scanf("%d", &a);
    printf("введите b = ");
    scanf("%d", &b);
    if(a > b)
        {
            c = a;
            a = b;
            b = c;
        }
    
    for(i = 1; i <= 100; i++)
    {
        ch = rand()%(b - (a) + 1) + (a);
        printf("ch = %d \n", ch);
        if(ch == 1)
            a1++; 
        if(ch == 2)
            a2++; 
        if(ch == 3)
            a3++; 
        if(ch == 4)
            a4++; 
        if(ch == 5)
            a5++; 
        if(ch == -1)
            b1++; 
        if(ch == -2)
            b2++; 
        if(ch == -3)
            b3++; 
        if(ch == -4)
            b4++; 
        if(ch == -5)
            b5++; 
        if(ch == 0)
            ab++; 
    }
    
   printf("a1 = %d \n", a1);
   printf("a2 = %d \n", a2);
   printf("a3 = %d \n", a3);
   printf("a4 = %d \n", a4);
   printf("a5 = %d \n", a5);
   printf("b1 = %d \n", b1);
   printf("b2 = %d \n", b2);
   printf("b3 = %d \n", b3);
   printf("b4 = %d \n", b4);
   printf("b5 = %d \n", b5);
   printf("ab = %d \n", ab);
   
    return 0;  
}