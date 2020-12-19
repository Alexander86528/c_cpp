
#include <stdio.h>

#define N 100

int main()
{
    char ch;
    char num[N];
    int i;
    
    i = 0;
    while((ch = getchar()) != EOF && i<N-1)
        if(ch>=48 && ch<=57)
        {
            num[i] = ch;
            i++;
        }
    
    num[i] = '\0';
    printf("\n");
    printf("%s \n", num);
    
    return 0;
}