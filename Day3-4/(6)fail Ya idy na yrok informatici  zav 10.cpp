
/*10.Даны вещественные числа а, Ь, с, d, e, f, g. Найти
площадь пятиугольника, изображенного на рисунке. (Опреде­
лить функцию для расчета площади треугольника по трем его
сторонам.) 

*/
#include <iostream>
#include <math.h>
using namespace std;
float func_triangle_Geroin(float a,float b,float c)
{float pp,s;
if(a >= b + c || b >= a + c || c >= b + a)
{return 0;
}
else{pp=(a+b+c)*0.5;
return sqrt(pp*(pp-a)*(pp- b )*(pp-c));;
}


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



cout<<"Plosha = "<<func_triangle_Geroin( a, b, f)+func_triangle_Geroin( f, g, c)+func_triangle_Geroin( g, e, d)<<" odinic";
}

