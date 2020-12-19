
#include <stdio.h>

int main()
{
	char chs;
	unsigned char chu;
	int i;
	char a = '4', b = '7';
/*	
	chs = 119;
	printf("char chs -> %c\n", chs);
*/

	for(i = 0; i < 127; i++)
	{
		chs = i;
		printf("char chs(%d) -> %c\n", i, chs);
	}
	
	printf("\n");
/*	
	for(i = 0; i < 255; i++)
	{
		chu = i;
		printf("char chu(%d) -> %c\n", i, chu);
	}
*/
	printf("'7'-> %d \n", '7');
	printf("'7'-'4' -> %d \n", '7'-'4');
	printf("('7'-'0')+('4'-'0') -> %d + %d = %d\n", '7'-'0', '4'-'0', ('7'-'0')+('4'-'0'));
	
	printf("'\\n' -> %d\n", '\n');
	printf("'%c' -> %d\n", 37, '%');
//	printf("'%' -> %d\n", '%'); warning
	
	printf("%d -> '%c'\n", '%', '%');
	printf("%d -> '%c'\n", 37, 37);
	
	return 0;
}