/*15. кажный элемен вектора A(n) (кроме двух крайних) заменить выражением
A[i]={A [i-1] +2* A[i] +A [i+1])/4. i=2,3,...,n-1, 
 крайние елементы выражениями a[0]=(a[1]+a[2])/2
 							a[n]=(a[n-1]+a[n])/2
*/
#include <iostream>
#include <vector> // подключаем модель Векторов
#include <cstdlib>
#include<time.h>
using namespace std;
int main()
{	int N;
cout<<"rozmir vektoriv?:";
cin>>N;
srand( time(0) );
    vector<double> myVector1(N);
    // вывод элементов вектора на экран
    cout << "Vhidniy masiv: ";
    for(int i = 0; i < myVector1.size(); i++) {
        myVector1[i] = rand()%10;
        cout << myVector1[i] << ' ';
    }
    cout<<endl;
    //Dlya krainih zrobili
    myVector1[0]=(myVector1[0]+myVector1[1])/2;
    myVector1[N]=(myVector1[N-1]+myVector1[N])/2;
    
    cout<<"0 element posle peretvoreNb= "<<myVector1[0]<<endl;
     cout<<"N element posle peretvoreNb= "<<myVector1[N]<<endl;
cout<<"i=1,2...n-1 elemenut posle peretvoreNb= ";
    vector<double> myVector2(myVector1); // при объявлении второго вектора, копируется - первый
    for(int i = 1; i < myVector2.size()-1; i++) { //dlya elementiv mij myVector1[0] i elementov myVector1[N]
        myVector2[i] = myVector1[i] ;
         myVector2[i]=myVector2[i-1]+2*myVector2[i]+myVector2[i+1] ;
        cout << myVector2[i] << ' ';
    }
    
    	cout << "\nVuhidniy masiv: ";
    	for(int i = 0 ; i < myVector1.size(); i++) {
    	myVector2[N]=myVector1[N]; // po4emyto ne robit v cikle
        myVector2[0]=myVector1[0];
        }
        
    	for(int i = 0 ; i < myVector1.size()-1; i++) {
        cout<<myVector2[i]<<" ";
        
        }
         cout<<myVector2[N]<<" ";
    return 0;
}


