
/*16. rekyrsivno chisla fibonachi
Vidpovistu na pitannya chum pogana rekyrsiya?
vidpovidb:https://habrahabr.ru/sandbox/28723/
Tobto:orjadok slozhnosti vtorogo nerekursivnogo algoritma raven O(n),
gde n-nomer iskomogo chisla Fibonachchi, to porjadok slozhnosti rekursivnogo algoritma, neochevidno,
raven O(2^n) dva v stepeni n
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
