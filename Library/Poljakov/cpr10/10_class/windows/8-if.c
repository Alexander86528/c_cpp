/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 8. �������� ���������
 ����: 
   5 7
 ���������:
   7
   7
   7
   7
*/ 
#include <stdio.h>

main()
{
  int a, b, c, M, i;
  printf("������� ��� ����� �����: ");
  scanf("%d%d", &a, &b);  
  printf("������������ �����: \n");
  for ( i=1; i<=2; i++ ) { 
    if ( a > b ) 
         M = a;
    else M = b;
    printf ( "%d\n", M );  
    M = a;
    if ( b > a ) M = b;
    printf ( "%d\n", M );  
    c = a; a = b; b = c;
    }
  getchar();
}
