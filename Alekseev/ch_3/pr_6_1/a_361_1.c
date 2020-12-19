/*
3.6.1. Разветвляющийся процесс. Вычисление значения функции.
Стр. 86.


Рис. 3.36: Задание 1.
	  3, x < -3
  y(x) =  1, x >= 2
	  4, -3 <= x < 2
*/
#include <stdio.h>

int main()
{
	double x, y;
	
	printf("Введите x = ");
	scanf("%lf", &x);
	
	if (x < -3)
		y = 3;
	else
		if (x >= 2)
			y = 1;
		else
			y = 4;
		
	printf("y(x) = %f \n", y);
	
	return 0;
}
