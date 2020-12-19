/*
8. Даны два ненулевых числа a и b. 
Найти сумму S, разность R, произведение P    
и частное d квадратов заданных чисел.
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;
	
	do
	{
		printf("a != 0, a = ");
		scanf("%lf", &a);
	}
	while(a == 0);
	
	do
	{
		printf("b != 0; b = ");
		scanf("%lf", &b);
	}
	while(b == 0);
	
	printf("a + b = %lf \n", a + b);
	printf("a - b = %lf \n", a - b);
	printf("a * b = %lf \n", a * b);
	printf("a^2 / b^2 = %lf \n", pow(a, 2) / pow(b, 2));
	
	return 0;
}