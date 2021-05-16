/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 10. Реверс массива из файла
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
       int *data;
       int capacity;
       int size;
     } TStack;

void InitStack( TStack *pS, int capacity )
{
  pS->data = (int*) calloc ( capacity, sizeof(int) ); 
  pS->capacity = capacity;
  pS->size = 0;
}

void Push ( TStack *pS, int x )
{
  pS->size ++;
  if ( pS->size > pS->capacity ) {
    pS->capacity += 10;    
    pS->data = (int*) realloc ( pS->data, sizeof(int)*pS->capacity  );
    }
  pS->data[pS->size-1] = x;
}

int Pop ( TStack *pS )
{
  pS->size --;
  return pS->data[pS->size];
}

main ()
{
  FILE *F;
  TStack S;
  int x;

  InitStack ( &S, 5 );
  
  F = fopen ( "input_arr.dat", "r" );
  while ( 1 == fscanf(F, "%d", &x) ) 
    Push ( &S, x );
  fclose ( F );
  
  F = fopen ( "output_arr.dat", "w" );
  while ( S.size > 0 ) {
    x = Pop( &S );
    fprintf ( F, "%d\n", x );    
    }
  fclose(F);

  printf ( "\nРезультат записан в файл output_arr.dat\n");

  getchar();
}
