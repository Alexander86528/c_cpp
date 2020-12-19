
#include <stdio.h>
#define PRAISE "Какое прекрасное имя!"

int main()
{
  char name[100];

  printf("Как вас завут?\n");
  scanf("%s", name);
  printf("Здраствуйте, %s! %s\n", name, PRAISE);

  return 0;
}