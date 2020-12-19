/*
Подсчёт строк, слов, символов.
*/
#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int ch, nc, nl, nw, st;
    
    nc = nl = nw = 0;
    st = OUT;
    
    while((ch = getchar()) != EOF)
    {
        ++nc;
        if(ch == '\n')
            ++nl;
        if(ch == '\n' || ch == '\t' || ch == ' ')
            st = OUT;
        else
            if(st == OUT)
            {
                st = IN;
                ++nw;
            }
    }
    printf("\12");
    printf("nc = %d\nnl = %d\nnw = %d\n", nc, nl, nw);
    
    return 0;
}
