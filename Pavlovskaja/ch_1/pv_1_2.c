
#include <stdio.h>
#include <math.h>

int main()
{
	double z1, z2, agr, a;
	const double pi=3.141593;
	
	printf("Введите угол в градусах: ");
	scanf("%lf", &agr);
	printf("Угол в радианах: %lf\n\n", agr*pi/180);
   a=agr*pi/180;
	
	z1 = cos(a)+sin(a)+cos(3*a)+sin(3*a);
	printf("z1=cos(a)+sin(a)+cos(3*a)+sin(3*a)=%lf\n", z1);
	
	z2 = 2.0*sqrt(2.0)*cos(a)*sin(pi/4.0+2.0*a);
	printf("z2=2.0*sqrt(2.0)*cos(a)*sin(pi/4+2.0*a)=%lf \n", z2);
	
	return 0;
}