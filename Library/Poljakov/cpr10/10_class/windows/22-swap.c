/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 22. ���������� ���������
 ����: 
   2 3
 ���������:
   ����� ������: x=3 y=2
*/ 
#include <stdio.h>

void Swap ( int *adrA, int *adrB )
{
  int c;
  c = *adrA; *adrA = *adrB; *adrB = c;
}
main()
{
  int x, y;
  printf ( "������� ��� ����� �����: " );
  scanf ( "%d%d", &x, &y );
  Swap ( &x, &y );
  printf ( "����� ������: x=%d y=%d", x, y );
  getchar();
}


