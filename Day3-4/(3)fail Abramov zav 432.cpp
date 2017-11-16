/*432.даны действительные числа а0,...а6. получить для для х=1,3,4 значення p(x+1)-p(x)
, где p(y)=a[6]*y^6+a[5]*y^5+...+a[0]
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
 
double p(int y) {
    double const a0 = 0.1;
    double const a1 = 1.21;
    double const a2 = 12.321;
    double const a3 = 123.4321;
    double const a4 = 1234.321;
    double const a5 = 12343.21;
    double const a6 = 123432.1;
    
    return a6*pow(y,6)+a5*pow(y,5)+a4*pow(y,4)+a3*pow(y,3)+a2*pow(y,2)+a1*pow(y,1)+a0;
}
 
 
int main() {
    int const x1 = 1;
    int const x2 = 3;
    int const x3 = 4;
    
    printf("p(%d) - p(%d) = %f\n", x1 + 1, x1, p(x1 + 1) - p(x1));
    printf("p(%d) - p(%d) = %f\n", x2 + 1, x2, p(x2 + 1) - p(x2));
    printf("p(%d) - p(%d) = %f\n", x3 + 1, x3, p(x3 + 1) - p(x3));
    
    return EXIT_SUCCESS;
}
