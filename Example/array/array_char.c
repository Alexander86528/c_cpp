#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
  int i;
  char arr[N];
  
  for(i = 0; i < N; i++)
    *(arr+i) = getchar();
/*    arr[i] = getchar(); */
/*    scanf("%c", &arr[i]); */
  for(i = 0; i < N; i++)
    printf("array[%d] = %c\n", i, arr[i]);
  
  return 0;
}