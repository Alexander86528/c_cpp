/*
Даны катеты прямоугольного треугольника a, b.
Найти гипотенузу c, углы A, B.
*/
#include <stdio.h>
#include <math.h>

double square(double a);

int main()
{
	double a, b, c;
	double pi = 3.1415926536;
//	double A, B;

	printf("a = ");
	scanf("%lf", &a);
//	printf("a = %f \n");
	
	printf("b = ");
	scanf("%lf", &b);
//	printf("b = %f \n");
	
	c = sqrt(square(a) +square(b));
	printf("Гипотенуза c = %f \n", c);
//	A = a/c;
//	B = b/c;
	printf("Угол A = %.0f \n", asin(a/c)*180/pi);
	printf("Угол B = %.0f \n", asin(b/c)*180/pi);
	
	return 0;
}

double square(double a)
{
   return a*a;
}