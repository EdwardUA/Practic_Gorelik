
/*16. Два простых числа называются «близнецами», если
они отличаются друг от друга на 2 (таковы, например, числа
41 и 43). Напечатать все пары чисел-«близнецов», не превы­
шающих значение 200. 
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
