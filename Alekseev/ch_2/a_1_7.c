/*
7. Дана длина окружности L. Найти радиус окружности R и площадь круга S.  
*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main()
{
	double l, r, s;
	
	printf("l = ");
	scanf("%lf", &l);
	printf("l = %lf \n", l);
	
	r = l / (2 * PI);
	printf("r = %lf \n", r);
	
	s = PI * pow(r, 2);
	printf("S = %lf \n", s);
	
	return 0;
}