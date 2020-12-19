/*
Шапошкова стр. 13
*/

#include <stdio.h>
#define N 100

int main()
{
	char ch_st[] = "Hello world!";
	int i_array[N];
	float f_array[N];
	double d_array[N];
	
	printf("\n");
	printf("sizeof char %lu byte \n", sizeof(char));
	printf("\n");
	
	printf("sizeof short int %lu byte \n", sizeof(short int));
	printf("sizeof int %lu byte \n", sizeof(int));
	printf("sizeof long int %lu byte \n", sizeof(long int));
	printf("sizeof unsigned long int %lu byte \n", sizeof(unsigned long int));
	printf("\n");
	
	printf("sizeof float %lu byte \n", sizeof(float));
	printf("sizeof double %lu byte \n", sizeof(double));
	printf("sizeof long double %lu byte \n", sizeof(long double));
	printf("\n");
	
	printf("sizeof string: Hello world! %lu byte \n", sizeof(ch_st));
	printf("sizeof int i_array[%d] %lu byte \n", N, sizeof(i_array));
	printf("sizeof float f_array[%d] %lu byte \n", N, sizeof(f_array));
	printf("sizeof double d_array[%d] %lu byte \n", N, sizeof(d_array));
	printf("\n");
	
	return 0;
}