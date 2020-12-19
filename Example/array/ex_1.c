/*
Поляков
*/
#include <stdio.h>

int main()
{
    const int N = 10;
    int a[N];
    int i;
    
    for(i = 0; i < N; i++)
        a[i] = i*i;
    
    for(i = 0; i < N; i++)
        printf("a[%d] = %d \12", i, a[i]);
    
    return 0;
}
