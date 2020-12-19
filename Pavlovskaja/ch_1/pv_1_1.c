
#include <stdio.h>
#include <math.h>
int main()
{
	double a, api, xsin, xcos, xz2;
	const double pi = 3.141593;

	printf("введите угол в градусах а = ");
	scanf("%lf", &a);
	// угол в радианах api
	api = a * pi / 180;
	// предварительный расчет
	xsin = sin(3.0 * pi - 2.0 * api);
	xcos = cos(5.0 * pi + 2.0 * api);
	xz2 = sin(5.0 / 2.0 * pi - 8.0 * api);

	printf("z1 = %lf \n", 2.0 * (xsin * xsin) * (xcos * xcos)); 
	printf("z2 = %lf \n", 1.0 / 4.0 - (1.0 / 4.0 * xz2));

	return 0;
}