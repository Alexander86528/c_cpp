
#include <stdio.h>

int main()
{
  unsigned n, i, max, k;
    
  printf("n = ");
  scanf("%u", &n); 
  for(i = 1, max = k = 0; i <= n/2; i++)
  {
      if(n % i == 0)
      {
         k++;
           if(i > max)
             max = i;
        }
    }
  printf("количество делителей k = %u \n", k);                  
  printf("наибольший делитель = %u \n", max);
  
  return 0;
}