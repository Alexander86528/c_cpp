/*
Шапошникова стр.9
*/
#include <stdio.h>

main()
{
	int min, max;
	
	char ch = 63;
	unsigned char uch = 'r';
	short  j = 'b', k = 99;
	
	printf("|%d| \n", 555);
	printf("|%10d| \n", 555);
	printf("|%-10d| \n", 555);
	
	printf("Words: %12d \n", 59);
	printf("Letters: %10d \n", 1004);
	printf("Digits: %11d \n", 8);
	printf("\n");
/*
Шапошникова стр.9
*/
	/* Для целого числа int min -2^(n-1)...int max 2^(n-1) - 1 = -2147483648...2147483647. */		
	printf("\tsizeof int %d byte \n", (unsigned)sizeof(int));
	min = -2147483648;
	max = 2147483647;
	printf(" int min = %d \n int min-1 = %d \n", min, min-1);
	printf("\n");
	printf(" int max = %d \n int max+1 = %d \n", max, max+1);
	printf("\n");
	
/*
Шапошникова стр. 10 Символы.
*/
	printf("%c == %d \n", ch, ch);
	printf("%c == %d \n", uch, uch);
	printf("%c, %c \n", j, k);

	return 0;
}