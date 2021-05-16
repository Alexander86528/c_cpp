/*
 Программа к учебнику информатики для 11 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 6.
 Программа № 13. Деревья. Вычисление арифметических выражений
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TNode *PNode;
typedef struct TNode {    
    char data[20];
    PNode left;
    PNode right;
  } TNode;

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

PNode MakeTree ( char s[] )
{
  int k;
  PNode Tree; 
  char sLeft[80] = "";
  Tree = (PNode) calloc(1, sizeof(TNode));
  k = LastOp ( s );
  if ( k == -1 ) {
    strcpy ( Tree->data, s );
    Tree->left = NULL;
    Tree->right = NULL;
    }
  else {
    Tree->data[0] = s[k];
    Tree->data[1] = '\0';
    strncpy ( sLeft, s, k );
    Tree->left = MakeTree ( sLeft );
    Tree->right = MakeTree ( &s[k+1] );
    }
  return Tree;
}

int Calc ( PNode Tree )
{
  int n1, n2, res;
  if ( Tree->left == NULL )
    res = atoi ( Tree->data );
  else {
    n1 = Calc ( Tree->left );
    n2 = Calc ( Tree->right );
    switch ( Tree->data[0] ) {
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
  PNode T;
  char s[80];   
  printf ( "Введите арифметическое выражение без скобок: \n" );
  gets ( s );
  T = MakeTree ( s );
  printf ( "Результат: %d", Calc(T) );
  getchar();
}
