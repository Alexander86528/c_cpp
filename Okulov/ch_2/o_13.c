 /*
 Сумма цифр четырёхзначного числа.
 */
 #include <stdio.h>
 
int main()
 {
 	int ch;
 	
 	printf("Введите четырёхзначное число ch = ");
 	scanf("%d", &ch);
 	
 	while(1000 > ch || ch > 9999)
 	{
 		printf("ошибка!\n Введите четырёхзначное число ch = ");
 		scanf("%d", &ch);
 	}
 	
 	printf("Сумма %d \n", ch/1000 + (ch/100)%10 + (ch/10)%10 + ch%10);
 	
 	return 0;
 }