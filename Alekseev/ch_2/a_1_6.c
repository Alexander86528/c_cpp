/*
6. Даны катеты прямоугольного треугольника a и b. Найти гипотенузу c и
периметр P .
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, P;
	
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	
	c = sqrt(pow(a, 2) + pow(b, 2));
	printf("c = %lf \n", c);
	P = a + b +c;
	printf("P = %lf \n", P);
	
	return 0;
}