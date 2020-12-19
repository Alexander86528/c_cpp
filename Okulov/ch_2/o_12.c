 /*
 Сумма цифр трёхзначного числа.
 */
 #include <stdio.h>
 
int main()
 {
 	int ch;
 	
 	printf("Введите трёхзначное число ch = ");
 	scanf("%d", &ch);
 	
 	while(100 > ch || ch > 999)
 	{
 		printf("ошибка!\n Введите трёхзначное число ch = ");
 		scanf("%d", &ch);
 	}
 	
 	printf("Сумма %d \n", ch/100 + (ch/10)%10 + ch%10);
 	
 	return 0;
 }