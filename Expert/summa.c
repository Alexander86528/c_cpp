
#include <stdio.h>

int input_ch(int ch);
int nod(int b, int d);

int main()
{
	int a, b, c, d, ch, nod_bd, nok_bd;
	printf("Вычислить сумму двух натуральных дробей (a/b) и (c/d). \n");
	
	printf("Числитель: ");
	a = input_ch(ch);
	printf("Знаменатель: ");
	b = input_ch(ch);
	printf("Первая дробь: a/b = %d/%d; \n", a, b);
	
	printf("Числитель: ");
	c = input_ch(ch);
	printf("Знаменатель: ");
	d = input_ch(ch);
	printf("Вторая дробь: c/d = %d/%d; \n", c, d);
	
	nod_bd = nod(b,d);
	printf("Наибольший общий делитель знаменателей: %d \n", nod_bd);
	nok_bd = (b * d) / nod_bd;
	printf("Наименьшее общее кратное: %d \n", nok_bd);
	
	printf("Общий знаменатель: %d/%d + %d/%d \n", a*(nok_bd/b), nok_bd, c*(nok_bd/d), nok_bd);
	ch = a*(nok_bd/b) + c*(nok_bd/d);
//	printf("Дробь %d/%d \n", ch, nok_bd);
	nod_bd = nod(ch, nok_bd);
	printf("Наибольший общий делитель: %d \n", nod_bd);
	if(nod_bd > 1)
	{
		ch = ch / nod_bd;
		nok_bd = nok_bd / nod_bd;
		printf("Дробь %d/%d \n", ch, nok_bd);
	}
	else
		printf("Дробь %d/%d \n", ch, nok_bd);
	
	return 0;
}

int input_ch(int ch)
{
	printf("введите число > 0, ch = ");
	scanf("%d", &ch);
	while(ch <= 0)
	{
		printf("Ошибка! \n");
		printf("введите число > 0, ch = "); 
		scanf("%d", &ch);
	}	
	return ch;
}

int nod(int b, int d)
{
	while (b != d)
		if (b > d)
			b = b - d;
		else
			d = d - b;
	
	return  b;
}