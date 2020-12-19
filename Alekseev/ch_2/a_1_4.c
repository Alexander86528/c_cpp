/*
4. Дан диаметр окружности d. Найти длину окружности L и площадь круга S
*/
#include <stdio.h>
#define pi 3.14159265

int main()
{
	double d, S, L, r;
	
	printf(" d = ");
	scanf("%lf", &d);
	
	r = d/2;
	S = pi * (r*r);
	L = pi * d;
	
	printf("S = %lf, L = %lf \n", S, L);
	
	return 0;
}