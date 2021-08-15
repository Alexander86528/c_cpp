#include <stdio.h>
#include <limits.h>

int main()
{

    printf("unsigned short = %lu byte\n", sizeof(unsigned short));
    printf("USHRT_MAX = %d \n", USHRT_MAX);

    printf("\n");
    printf("sizeof short = %lu byte\n", sizeof(short));
    printf("SHRT_MAX = %d \n", SHRT_MAX);
    printf("SHRT_MIN = %d \n", SHRT_MIN);

    printf("\n");
    printf("sizeof int = %lu byte\n", sizeof(int));
    printf("INT_MAX = %d \n", INT_MAX);
    printf("INT_MIN = %d \n", INT_MIN);

    printf("\n");
    printf("unsigned int = %lu byte\n", sizeof(unsigned int));
    printf("UINT_MAX = %u \n", UINT_MAX);

    printf("\n");
    printf("long int = %lu byte\n", sizeof(long int));
    printf("LONG_MAX = %ld \n", LONG_MAX);
    printf("LONG_MIN = %ld \n", LONG_MIN);

    printf("\n");
    printf("unsigned long int = %lu byte\n", sizeof(unsigned long int));
    printf("ULONG_MAX = %lu \n", ULONG_MAX);

    printf("\n");
    printf("LLONG_MAX = %lld \n", LLONG_MAX);
    printf("LLONG_MIN = %lld \n", LLONG_MIN);

    printf("\n");
    printf("unsigned long long int = %lu byte\n", sizeof(unsigned long long int));
    printf("ULLONG_MAX = %llu \n", ULLONG_MAX);

    return 0;
}