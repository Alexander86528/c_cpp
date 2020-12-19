/*
Арифметическая прогрессия.
*/
#include <stdio.h>

int main()
{
	int a1, an, d, n;
	
	printf("введите число a1 = ");
	scanf("%d", &a1);

	printf("введите число d = ");
	scanf("%d", &d);
	
	printf("введите число n = ");
	scanf("%d", &n);
	
	an = a1 + d * (n - 1);
	printf("an = %d \n", an);
	
	return 0;
}