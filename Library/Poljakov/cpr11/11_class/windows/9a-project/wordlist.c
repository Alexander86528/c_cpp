#include "wordlist.h"

void IncSize ( TWordList *pL )
{
  pL->size ++;
  if ( pL->size > pL->capacity ) {
    pL->capacity += 10;    
    pL->data = (TPair*) realloc ( pL->data, sizeof(TPair)*pL->capacity );
    }
}   

int Find( TWordList L, char word[] )
{
  int i;
  for ( i=0; i<L.size; i++ )
    if ( 0 == strcmp(L.data[i].word, word) )
      return i;
  return -1;
}

int FindPlace ( TWordList L, char word[] )
{
  int i;
  for ( i=0; i<L.size; i++ )
    if ( strcmp(L.data[i].word, word) > 0 ) 
      return i;
  return L.size;
}

void printList ( TWordList L )
{
  int i;
  for ( i=0; i<L.size; i++ )
    printf ( "%s: %d\n", L.data[i].word, L.data[i].count );
}

void InsertWord ( TWordList *pL, int k, char word[] )
{
  int i;
  IncSize ( pL );
  for ( i=pL->size-1; i>=k+1; i-- )
    pL->data[i] = pL->data[i-1];
  strcpy ( pL->data[k].word, word );
  pL->data[k].count = 1;
}
