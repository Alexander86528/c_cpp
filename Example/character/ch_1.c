#include <stdio.h>

int main()
{
	char chs;
	int i;
	
	for(i = 33; i < 127; i++)
	{
		chs = i;
		printf("char chs(%d) -> %c\n", i, chs);
	}
	printf("\n");
	
	return 0;
}