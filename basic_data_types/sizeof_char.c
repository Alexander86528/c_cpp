#include <stdio.h>
#include <limits.h>

int main()
{
    char b;
    unsigned char c = 255;
/*
unsigned char 2^8 - 1; pow(2,8) - 1;
*/
    printf ("sizeof unsigned char = %lu byte \n", sizeof(unsigned char));
    printf ("sizeof unsigned char c = %lu byte; c = %u \n", sizeof c, c);
    c = c + 1;
    printf("unsigmed char c = c + 1; Переполнение \n");
    printf ("sizeof unsigned char c = %lu byte; c = %u \n", sizeof c, c);
    printf("\n");

    printf ("sizeof char = %lu byte \n", sizeof(char));
    printf ("sizeof char b = %lu byte \n", sizeof b);

    printf("CHAR_BIT = %d bit \n", CHAR_BIT);
    printf("CHAR_MIN = %d \n", CHAR_MIN);
    printf("CHAR_MAX = %d \n", CHAR_MAX);
    printf("SCHAR_MIN = %d \n", SCHAR_MIN);
    printf("SCHAR_MAX = %d \n", SCHAR_MAX);
    printf("UCHAR_MAX = %d \n", UCHAR_MAX);

    return 0;
}