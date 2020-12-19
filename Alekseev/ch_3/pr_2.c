/*
Алексеев стр. 50, задача 3.2.
*/
#include <stdio.h>

int main()
{
	double x, y;
	
	printf("введите координату x = ");
	scanf("%lf", &x);
	printf("введите координату y = ");
	scanf("%lf", &y);
	
	if (x >= -3 && x <= 3 && y >= -3 && y <= 3)
		printf("obl \n");
	else
		printf("noll \n");
		
	return 0;
}