/*
 ��������� � �������� ����������� ��� 10 ������
 �.�. �������� � �.�. �������.
 ����� 8.
 ��������� � 11. �������� ������
 ����: 
   3
 ���������:
   ����
*/ 
#include <iostream>
using namespace std;
main()
{
  int m;
  cout << "������� ����� ������: ";
  cin >> m;
  switch ( m ) { 
   case 1:  cout << "������"; break;
   case 2:  cout << "�������"; break;    
   case 3:  cout << "����"; break;
   case 4:  cout << "������"; break;
   case 5:  cout << "���"; break;
   case 6:  cout << "����";
       cout << ", ����!";         
       break;
   case 7:  cout << "����"; break;
   case 8:  cout << "������"; break;
   case 9:  cout << "��������"; break;
   case 10: cout << "�������"; break;
   case 11: cout << "������"; break;
   case 12: cout << "�������"; break;
   default: cout << "������"; break;
   }         
  cin.get(); cin.get();
}
