/*
Курс молодого бойца МФТИ
Метки, оператор goto и оператор switch
*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    switch (x)
    {
        case 1: printf("one \n"); break;
        case 0: printf("Zero! \n"); break;
        default: printf("Don't know this number...\n");
    };

    return 0;
}