/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 11. Стек. Проверка скобочных выражений
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
       char *data;
       int capacity;
       int size;
     } TStack;

void InitStack( TStack *pS, int capacity )
{
  pS->data = (char*) calloc ( capacity, sizeof(char) ); 
  pS->capacity = capacity;
  pS->size = 0;
}

void Push ( TStack *pS, int x )
{
  pS->size ++;
  if ( pS->size > pS->capacity ) {
    pS->capacity += 10;    
    pS->data = (char*) realloc ( pS->data, sizeof(char)*pS->capacity  );
    }
  pS->data[pS->size-1] = x;
}

char Pop ( TStack *pS )
{
  pS->size --;
  return pS->data[pS->size];
}
bool isEmpty ( TStack S )
{
  return S.size == 0;
}

main ()
{
  const char L[] = "([{", R[] = ")]}";
  char str[80];    
  TStack S;
  bool err;
  int i;
  char c, *p;

  InitStack ( &S, 5 );
  printf ( "Введите выражения со скобками (), [], {}: " );
  gets ( str );

  err = false;
  for ( i=0; i<strlen(str); i++ ) {
    p = strchr ( L, str[i] );
    if ( p != NULL )
      Push ( &S, str[i] );
    p = strchr ( R, str[i] );
    if ( p != NULL ) {
      if ( isEmpty ( S ) ) err = true;
      else {
        c = Pop ( &S );
        if ( p-R != strchr(L,c)-L ) err = true;
        }
      if ( err ) break;
      }
    }

  if ( ! isEmpty(S) ) err = true;

  if ( ! err )
     printf ( "Скобки расставлены верно.\n" );
  else
     printf ( "Скобки расставлены неверно.\n" );
     
  getchar();
}
