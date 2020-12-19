/*
5. Даны три числа — a, b, c. Найти среднее арифметическое и среднее 
геометрическое заданных чисел.
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, z;
	
	printf("x = ");
	scanf("%lf", &x);
	printf("y = ");
	scanf("%lf", &y);
	printf("z = ");
	scanf("%lf", &z);
	
	printf("Среднее арифметическое -> %lf \n", (x + y + z)/3);
	printf("Среднее геометрическое ->  %lf \n", pow((x + y +z), 1.0/3.0));
	
	return 0;
}