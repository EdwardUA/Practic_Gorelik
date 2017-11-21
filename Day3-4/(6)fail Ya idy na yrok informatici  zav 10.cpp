
/*10.dani prosti chisla, Ü, ñ, d, e, f, g. 
naitu ploshy pramokytnika(napisaTb fynkII,iy)
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float func_triangle_Geroin(float a,float b,float c)
{float pp,s;
pp=(a+b+c)*0.5;
return sqrt(pp*(pp-a)*(pp- b )*(pp-c));;
}
bool func_real_triangle(float a,float b,float c)
{
     if(a <= b + c && b <= a + c && c <= b + a)
{return true;}
else{return false;}
     }

int main()
{float a,b,c,d,e,f,g;
cout<<"Vvedite a,b,c,d,e,f,g"<<endl;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
cin>>f;
cin>>g;
if(func_real_triangle(a,b,f)==1 && func_real_triangle(f,g,c)==1 && func_real_triangle(g,e,d)==1){
cout<<"Plosha = "<<setiosflags(ios::fixed) <<setprecision(1)<<func_triangle_Geroin( a, b, f)+func_triangle_Geroin( f, g, c)+func_triangle_Geroin( g, e, d)<<" odinic";
}
else{cout<<"Unrial triangles"<<endl;}
system("pause");
}

