#include <stdio.h>
#include <float.h>

int main()
{
    printf("float = %lu byte \n", sizeof(float));
    printf("FLT_MIN = %g \n", FLT_MIN);
    printf("FLT_MAX = %g \n", FLT_MAX);
//6-7 значащих цифр.
    printf("\n");

    printf("double = %lu byte \n", sizeof(double));
    printf("DBL_MIN = %g \n", DBL_MIN);
    printf("DBL_MAX = %g \n", DBL_MAX);
//15 - 16 значащих цифр.
    printf("\n");

    printf("long double = %lu \n", sizeof(long double));
    printf("LDBL_MIN = %Lg \n", LDBL_MIN);
    printf("LDBL_MAX = %Lg \n", LDBL_MAX);
    printf("\n");

    return 0;
}