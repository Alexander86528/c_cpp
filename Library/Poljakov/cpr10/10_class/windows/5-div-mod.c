/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 5. �������� �������, ������ �������, ����������
 ����: 
   85
 ���������:
   8 5
   -3 1 
   -1
   -2 
   -1
   1
   1
   2
   253
*/
#include <stdio.h>
#include <math.h>

main()
{
   int a, b, d, y;
   printf ( "������� ����� �����: ");
   scanf ( "%d", &d);   // d =85
   a = d / 10;   // = 8 
   b = d % 10;   // = 5 
   printf ( "%d %d\n", a,  b );
   printf ( "%d ", (-7) / 2 );
   printf ( "%d\n", (-7) % 2 );
   y = 2*a*a + b*b*b;
   printf ( "%d\n", y );
   printf ( "%d\n", int(-1.6) );
   printf ( "%g\n", floor(-1.6) );
   printf ( "%g\n", ceil(-1.6) );
   printf ( "%d\n", int(1.6) );
   printf ( "%g\n", floor(1.6) );
   printf ( "%g\n", ceil(1.6) );
   getchar();
}
