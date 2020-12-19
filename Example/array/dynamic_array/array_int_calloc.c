#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i, n;
  int *array;
  int a, b, c;
  
  srand(time(NULL));
  
  printf("введите диапазон чисел \n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("\12");
  if(a > b)
  {
    c = a;
    a = b;
    b = c;
  }
  
  printf("введите размер вектора \n");
  printf("n = ");  
  scanf("%d", &n);
  printf("\12");
  
  array = (int *)calloc(n, sizeof(int));
  if(!array)
  {
    printf("Out of memory!");
    exit(1);
  }
  for(i = 0; i < n; i++)
    array[i] = rand()%(b - a +1) + a;
  for(i = 0; i < n; i++)
    printf(" array[%d] = %d \n", i, array[i]);
  
  free(array);
  
  return 0;
}