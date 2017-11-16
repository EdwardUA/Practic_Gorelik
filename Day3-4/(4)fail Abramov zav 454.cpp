
/*454.Napisatb rekrysivnyy fynkII,iy nahojdenie faktoriala
,otvetiTb chem ploha rekyrsiya: nichem - Rekyrsiya - sila!
*/
#include <iostream>
using namespace std;

long double fact(int N)
{
    if(N < 0) // vviv - chislo vertaem 0
        return 0; 
    if (N == 0)// vviv 0  vertaem 1
        return 1; 
    else 
        return N * fact(N - 1); // vse horosho delayem rekyrsiy
}

int main()
{
    int N;
    cout << "Vveditb chislo N!: ";
    cin >> N;
    cout << "Faktorial chisla " << N << " = " << fact(N) << endl << endl; // fact(N) - ispolbzyem nashy fynkII,iy-rekyrsiy
    return 0;
}

