
#include <stdio.h>

int main()
{
	unsigned int a, b;
	
	printf("Введите число > 0,  a = ");
	scanf("%u", &a);
//	printf("a = %u \n", a);
	printf("Введите число > 0, b = ");
	scanf("%u", &b);
	
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	
	printf("nod = %u \n", a);
	
	return 0;
}
