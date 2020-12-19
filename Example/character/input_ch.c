
#include <stdio.h>

int main()
{
	int ch;

	printf("Введите число > 0, ch = ");
	scanf("%d", &ch);
	while(ch <= 0)
	{
		printf("Ошибка! \n");
		printf("Введите число > 0, ch = "); 
		scanf("%d", &ch);
	}
	
	return 0;
}