    /*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 14. Деревья. Вычисление арифметических выражений.
                 Хранение узлов бинарного дерева в массиве
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char str[10];

typedef struct {    
    str *data;
    int size;
  } TTree;

void InitTree ( TTree *Tree, int size )
{
   int i;  
   Tree->size = size;
   Tree->data = (str*) calloc ( size, sizeof(str) );
   for ( i=0; i<size; i++ )
     Tree->data[i][0] = '\0';  
}

void ShowTree ( TTree Tree )
{
  int i;
  for ( i=0; i<Tree.size; i++ )
    printf ( "%d: %s\n", i+1, Tree.data[i] );
}

void AddToTree ( char s[], TTree *Tree, int k )
{
  int i;  
  if ( k > Tree->size ) {
    Tree->data = (str*) realloc ( Tree->data, (Tree->size+10)*sizeof(str) );  
    for ( i=Tree->size; i<Tree->size+10; i++ )
      Tree->data[i][0] = '\0';  
    Tree->size += 10;   
    }
  strcpy ( Tree->data[k-1], s );
}

int Priority ( char op )
{
  switch ( op ) {
    case '+':
    case '-': return 1;
    case '*':
    case '/': return 2;
    }
  return 100;  
}

int LastOp ( char s[] )
{
  int i, minPrt, res;
  minPrt = 50;
  res = -1;
  for ( i=0; i<strlen(s); i++ )
    if ( Priority(s[i]) <= minPrt ) {
      minPrt = Priority(s[i]);
      res = i;
      }
  return res;
}

void MakeTree ( char s[], TTree *Tree, int iRoot )
{
  int k;
  char sLeft[80], sRight[80], sOp[] = ".";
  k = LastOp(s);
  if ( k == -1 ) AddToTree ( s, Tree, iRoot);
  else {
    sOp[0] = s[k];   
    AddToTree ( sOp, Tree, iRoot );
    strncpy ( sLeft, s, k );
    sLeft[k] = '\0';
    strcpy ( sRight, &s[k+1] );
    MakeTree ( sLeft, Tree, 2*iRoot);
    MakeTree ( sRight, Tree, 2*iRoot+1);
    }
}

int Calc ( TTree Tree, int iRoot )
{
  int n1, n2, res;
  if (2*iRoot >= Tree.size || Tree.data[2*iRoot-1][0] == '\0') 
    res = atoi ( Tree.data[iRoot-1] );
  else {
    n1 = Calc ( Tree, 2*iRoot );
    n2 = Calc ( Tree, 2*iRoot+1 );
    switch ( Tree.data[iRoot-1][0] ) {
      case '+': res = n1 + n2; break;
      case '-': res = n1 - n2; break;
      case '*': res = n1 * n2; break;
      case '/': res = n1 / n2; break;
      default: res = 99999;
    }    
  }
  return res;
}

main ()
{
  TTree Tree;
  char s[80];   
  printf ( "Введите арифметическое выражение без скобок: \n" );
  gets ( s );
  InitTree ( &Tree, 5 );
  MakeTree ( s, &Tree, 1 );
  printf ( "Двоичное дерево в массиве:\n" );
  ShowTree ( Tree );
  printf ( "Результат: %d", Calc ( Tree, 1 ) );
  getchar();
}
