/*
Даны гипотенуза с и угол альфа прямоугольного треугольника.
Найти угол бетта и площадь.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double c, a, b, A, B;
	double pi = 3.1415926536;
	
	printf("c = ");
	scanf("%lf", &c);
	printf("A = ");
	scanf("%lf", &A);
	B = 90 - A;
	
	a = c * sin(A * pi/180);
	printf("a = %.3f \n", a);
	b = c * cos(A * pi/180);
	printf("b = %.3f \n", b);
	
	printf("B = %.0f \n", B);
	printf("S = a * b = (%.3f * %.3f) / 2 = %.3f \n", a, b, (a * b)/2);

	return 0;
}