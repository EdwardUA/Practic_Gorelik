
/*454.������ ������ ���� ������ ����� ���������. ������ ������������� � �����, � ������ ������� ���������� ����� �������

����� ����� � ���� �������. ������������ �������� � ��������� �������� ������� �� ���. 53. ���� ������ ���� - 1.6 �. 
����� �� ��������� ������ � ������� � ����? ���� ��, �� � ����� ��������� ��������� � ��� ����� ����� ������ ������� ������ ����� ���?
 � �������� ������������ �������������� �������.
���. 53 779. ����� ����� ����������� ������������� �����������
�������
http://easyfizika.ru/zadachi/kinematika/pod-kakim-uglom-k-gorizontu-nuzhno-brosit-telo-chtoby-vysota/ 
*/
#include <iostream>
#include <math.h>
using namespace std;
const int g =9.8; //gravitaciyna stala
const int Robin =1.6; //gravitaciyna stala
int main()
{
    double V,a;
    double h1,h2,H,H1,H2;
    double l1,l2,l3;
    double s1,s2;
    cout<<"VvediTb l1,l2,l3:";
    cin>>l1;
    cin>>l2;
    cin>>l3;
     cout<<"VvediTb h1,h2";
     cin>>h1;
     cin>>h2;
     cout<<"VvediTb h1,h2";
     cin>>s1;
     cin>>s2;
     while(H<=fabs((fabs(h1+h2-Robin)+s1-s2))){
     	V++;
     	a++;
     	H+=(V*V*(sin(sin(a))))/2*g;
	 }
	 while(H1<=H){
     	H1++;
     	a++;
     	V+=((sin(sin(a)))/2*g*H1);
     	
	 }
	  while(H1<=H){
     	H2++;
     	V++;
     	a+=((2*g*H2)/V*V);
	 }
      cout<<"H="<<H<<" metrov"<<endl;
      cout<<"V0="<<sqrt(V)<<" metrov/secundu^2"<<endl;
      cout<<"sin a="<<sqrt(a)<<"gradusov"<<endl;
}

