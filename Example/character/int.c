#include <stdio.h>
#include <math.h>

int main()
{
	short int s_min, s_max;
	unsigned short int us_min, us_max;
	int min, max;
	unsigned int u_min, u_max;
	long int l_min, l_max;
	unsigned long int ul_min, ul_max;
	
	printf("\n");
/* short int -2^(16-1) ... 2^(16-1)-1 = -32768 ... 32767. */
	printf("\tsizeof short int %d byte \n", (unsigned)sizeof(short int));
	s_min = -32768;
	s_max = 32767;
	printf("short int min = %d   short int max = %d \n", s_min, s_max);
//	printf("short int min-1 = %d \t short int max+1 = %d \n", s_min-1, s_max+1); ???????
	s_min = s_min - 1;
	s_max = s_max + 1;
	printf("short int min-1 = %d   short int max+1 = %d \n", s_min, s_max);
	printf("\n");
	
/* unsigned short int min 0 ... unsigned short int max 2^(16)-1 = 0 ... 65535. */
	printf("\tsizeof unsigned short int %d byte \n", (unsigned)sizeof(unsigned short int));
	us_min = 0;
	us_max = 65535;
	printf("unsigned short min = %u   unsigned short max = %u \n", us_min, us_max);
	us_min = us_min - 1;
	us_max = us_max + 1;
	printf("unsigned short min-1 = %u   unsigned short max+1 = %u \n", us_min, us_max);
	printf("\n");

/* Для целого числа int min -2^(n-1)...int max 2^(n-1) - 1 = -2147483648...2147483647. */		
	printf("\tsizeof int %d byte \n", (unsigned)sizeof(int));
	min = -2147483648;
	max = 2147483647;
	printf(" int min = %d   int max = %d \n", min, max);
	printf(" int min-1 = %d   int max+1 = %d \n", min-1, max+1);
	printf("\n");
	
/* unsigned int 0 ... 2^(32)-1 = 0 ... 4294967295. */	
	printf("\tsizeof unsigned int %d byte \n", (unsigned)sizeof(unsigned int));
	u_min = 0;
	u_max = 4294967295;
	printf("unsigned int min = %u   unsigned int max = %u \n", u_min, u_max);
	printf("unsigned int min-1 = %u   unsigned int max+1 = %u \n", u_min-1, u_max+1);
	printf("\n");
	
/*long int -2^(64-1) ... 2^(64-1)-1 = -9223372036854775808 ... 9223372036854775807.*/
	printf("\tsizeof long int %d byte \n", (unsigned)sizeof(long int));
	l_min = -9223372036854775808;
	l_max = 9223372036854775807;
	printf("long int min = %ld   long int max = %ld \n", l_min, l_max);
	l_min = l_min - 1;
	l_max = l_max + 1;
	printf("long int min-1 = %ld   long int max+1 = %ld \n", l_min, l_max);
	printf("\n");
	
/*unsigned long 0 ... 2^(64)-1 = 0 ... 18446744073709551615*/
	printf("\tsizeof unsigned long int %d byte \n", (unsigned)sizeof(unsigned long int));
	ul_min = 0;
	ul_max =(unsigned long)pow(2, 64);
	printf("unsigned long int min = %lu  unsigned long int max %lu\n", ul_min, ul_max);
	ul_min = ul_min - 1;
	ul_max = ul_max + 1;
	printf("unsigned long int min-1 = %lu  unsigned long int max+1 %lu\n", ul_min, ul_max);
	printf("\n");
	
	return 0;
}