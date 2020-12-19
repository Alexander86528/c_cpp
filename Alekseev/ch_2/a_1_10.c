/*
 * 10. Точки A и B заданы координатами на плоскости: A(x1 , y1 ), B(x2, y2 ). Найти
длину отрезка AB.
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double x1, y1, x2, y2;
	
	printf("x1 = ");
	scanf("%lf", &x1);
	printf("y1 = ");
	scanf("%lf", &y1);
	printf("x2 = ");
	scanf("%lf", &x2);
	printf("y2 = ");
	scanf("%lf", &y2);
	
	printf("Расстояние между точками:\nd = %lf \n",  sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2)));
	
	
	return 0;
}