/*
9. Поменять местами содержимое переменных A и B и вывести новые   
значения A и B.
 */
#include <stdio.h>

int main()
{
	double a, b, temp;
	
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	
	temp = a;
	a = b;
	b = temp;
	printf("a = %lf \n", a);
	printf("b = %lf \n", b);
	
	return 0;
}