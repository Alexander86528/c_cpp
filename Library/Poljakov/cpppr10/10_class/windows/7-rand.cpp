/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 7. ��������������� �����
 ����: 
   ��� 
 ���������:
   <��������� ����� �� 10 �� 20 ������������>
   <��������� ������������ �� [1 �� 2)>
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
   int a = 10, b = 20, rAB;
   float x = 1, y = 2, rXY;
   rAB = a + rand()%(b-a+1);
   cout << rAB << endl;
   rXY = x + (y-x)*rand()/RAND_MAX;
   cout << rXY << endl;     
   cin.get();
}
