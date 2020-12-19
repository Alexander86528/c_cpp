
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
	printf("api = %f \n", api);

	z1 = (sin(4*api)/(1+cos(4*api))) * (cos(2*api)/(1+cos(2*api)));
	printf("z1 = %f \n", z1);

	z2 = 1.0/tan(3*pi/2 - api);
	printf("z2 = %f \n", z2);


	return 0;
}