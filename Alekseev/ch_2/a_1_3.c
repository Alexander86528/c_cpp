/*
	3. Известна диагональ квадрата d. Вычислить площадь S и периметр P   
квадрата.
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double d, S, P; //S-площадь. P-периметр.	
// S = d^2/2, d-диоганаль квквадрата.
	printf("d = ");
	scanf("%lf", &d);
	
	S = d*d/2;
	P = sqrt(S) * 4;
	
	printf("S = %lf \n", S);
	printf("P = %lf \n", P);
	
	return 0;
}