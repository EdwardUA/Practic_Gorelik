/*15. 5.	 Tri prjamy na ploshhiny zadano ryvnjannjami a[k]*x+b[k]*y=c[k], k=1,2,3. 
Jakshho cy prjamy poparno peretinajut'sja i utvorjujut' trikutnik, todi znajti jogo ploshhu. 
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
 //http://e-maxx.ru/algo/diofant_2_equation
bool find_any_solution (int a, int b, int c, int & x0, int & y0, int & g) {
	g = gcd (abs(a), abs(b), x0, y0);
	if (c % g != 0)
		return false;
	x0 *= c / g;
	y0 *= c / g;
	if (a < 0)   x0 *= -1;
	if (b < 0)   y0 *= -1;
	return true;
}

int main() {
    int a,b,c,x,y,g;
    cout<<"vvedit "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>x;
    cin>>y;
    std::cout<<gcd(a,b,x,y);
system("pause");
return 0;
}
