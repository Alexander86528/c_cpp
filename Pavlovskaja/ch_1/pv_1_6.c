#include <stdio.h>
#include <math.h>

double v6_1(double);
double v6_2(double);

int main()
{
    double a, api, z1, z2;
    const double pi = 3.141593;

    printf("a=");
    scanf("%lf", &a);
    api=a*pi/180;
    printf("api=%lf\n", api);

    z1=v6_1(api);
    z2=v6_2(api);
    printf("z1=%lf\nz2=%lf\n", z1, z2);

    return 0;
}

double v6_1(double api)
{
    return cos(api)+cos(2*api)+cos(6*api)+cos(7*api);
}

double v6_2(double api)
{
    return 4.0*cos(api/2.0)*cos(5.0/2.0*api)*cos(4.0*api);
}