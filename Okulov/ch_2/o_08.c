/*
 *Выделить в произвольном числе n (n > 99) цифру сотен двумя способами. 
 */
#include <stdio.h>

int main()
{
	int n;
	
	printf("enter n > 99, n -> ");
	scanf("%d", &n);
	while(n < 100)
	{
		printf("error! \n");
		printf("enter n > 99, n -> ");
		scanf("%d", &n);
	}
	
	printf("method 1 : %d \n", (n/100)%10);
	printf("method 2 : %d \n", (n%1000)/100);
	
	return 0;
}