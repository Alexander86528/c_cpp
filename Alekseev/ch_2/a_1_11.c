/*
 * 11. Заданы два катета прямоугольного треугольника a и b. Вычислить площадь
S и периметр P .
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;
	
	do
	{
		printf("a > 0, a = ");
		scanf("%lf", &a);
	}
	while(a <= 0);
	
	do
	{
		printf("b > 0, b = ");
		scanf("%lf", &b);
	}
	while(b <= 0);
	
	printf("Площадь прямоугольного треугольника:\nS = %lf \n", (a * b)/2.0);
	printf("Периметр прямоугольного треугольника:\nP = %lf \n", sqrt(pow(a, 2) + pow(b, 2))  + a + b);
	
	return 0;
}