#include <stdio.h>
#include <math.h>

int main()
{
    double a, api, z1, z2;
    const double pi=3.141593;
    printf("Pavlovskaja pr_3:\n");

    printf("a°= ");
    scanf("%lf", &a);
    api=a*pi/180;
    printf("api = %lf\n", api);
    
    z1=(sin(2*api)+sin(5*api)-sin(3*api))/(cos(api)+1-2*(sin(2*api))*(sin(2*api)));
    z2=2 *sin(api);
    printf("z1=%lf\n", z1);
    printf("z2=%lf\n", z2);

    return 0;
}