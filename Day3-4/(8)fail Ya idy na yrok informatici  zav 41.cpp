
/*16. ��� ������� ����� ���������� �����������, ����
��� ���������� ���� �� ����� �� 2 (������, ��������, �����
41 � 43). ���������� ��� ���� �����-����������, �� ������
������ �������� 200. 
*/
#include <iostream>
 
using namespace std;
 
int fib(int k)
{
    return k < 2 ? k : fib(k - 1) + fib(k - 2);
}
 
int main()
{double a;
	cout<<"Number? '*'-exit. "<<endl;
	while((a=getchar())!= '*'){
	
		cin>>a;
		cout << fib(a) << endl;
	}
	return 0;
    
}
