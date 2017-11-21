/*432.даны действительные числа а0,...а6. получить для для х=1,3,4 значення p(x+1)-p(x)
, где p(y)=a[6]*y^6+a[5]*y^5+...+a[0]
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<cstdlib>
#include<time.h>
#include<iostream>
#include <iomanip>
 using namespace std;
double p(int y) {
       srand( time(0) );
       int num[5];
       int i;
       for ( i=0; i<5; i++) 
       {num[i]=rand()%100;}
    return num[5]*pow(y,num[5])+num[4]*pow(y,num[4])+num[4]*pow(y,num[3])+num[2]*pow(y,num[2])+num[1]*pow(y,num[1])+num[0]*pow(y,num[0])+num[0];
}
 
 
 main() {
    int const x1 = 1;
    int const x2 = 3;
    int const x3 = 4;
    
  cout<<"p(%d) - p(%d) = %f "<<setiosflags(ios::fixed) <<setprecision(1)<< x1 + 1, x1, p(x1 + 1) - p(x1);
  cout<<endl;
    cout<<"p(%d) - p(%d) = %f " <<setprecision(1)<<x2 + 1, x2, p(x2 + 1) - p(x2);
    cout<<endl;
    cout<<"p(%d) - p(%d) = %f " <<setprecision(1)<<x3 + 1, x3, p(x3 + 1) - p(x3);
    cout<<endl;
  system("pause");
    return EXIT_SUCCESS;
}
