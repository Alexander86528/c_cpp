/*
	Павловская стр.27 Вариант 7.
*/
#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
	int a;
	double z1, z2, api;
	
  printf("Введите угол a = ");
	scanf("%d", &a);
	
	api = a*pi/180; /* Перевод из градусов в радианы. */
//	printf("api = %f \n", api);
	
	z1 = pow(cos(3.0*pi/8 - api/4), 2) - pow(cos(11.0*pi/8 + api/4), 2);
	printf("z1 = pow(cos(3.0*pi/8 - api/4), 2) - pow(cos(11.0*pi/8 + api/4), 2) = %f \n", z1);          
	
	z2 = sqrt(2.0)/2 * sin(api/2);
	printf("z2 = sqrt(2.0)/2 * sin(api/2) = %f \n", z2);
	
	return 0;
}