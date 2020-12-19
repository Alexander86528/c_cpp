
#include <stdio.h>

int main()
{
	int i, a;
	
	printf(" a = ");
	scanf("%d", &a);
	
	for(i=1; i<21; i++)
	{
		printf("деление %d mod %d = %d\n", i, a, i%a);
	}
	return 0;
}