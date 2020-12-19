
#include <stdio.h>
#include <string.h>
#define PRAISE "Какое прекрасное имя!"

int main()
{
  char name[100];

  printf("Как вас завут?\n");
  scanf("%s", name);
  printf("Здраствуйте, %s! %s\n", name, PRAISE);
  printf("Ваше имя состоит из %lu символов и занимает %lu ячеек памяти.\n", strlen(name), sizeof(name));
  printf("Хвалебная фраза содержит %lu символов", strlen(PRAISE));
  printf(" и занимает %lu ячеек памяти. \n", sizeof PRAISE);
  
  return 0;
}