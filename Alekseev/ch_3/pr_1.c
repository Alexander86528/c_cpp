
#include <stdio.h>

int main()
{
	double x, y;
	
	printf("x = ");
	scanf("%lf", &x);
	
	if (x <= -2)
		y = 4;
	else 
		if (x >= 1)
			y = 1;
		else
			y = x * x;
		
	printf("y = %f \n");
	
	return 0;
}