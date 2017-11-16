/*16(1).	Viznachiti znachennja funkciiu=f(x) na promizhku [a,b] z  krokom  h 
vikoristovujuchi dlja obchislennja znachennja funkciipidprogramu-funkciju.
y=5*sin(x)/cos^2(x-2), a=-PI, b=PI, h=0.5
*/

#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> // DLYA 5 11 robit
#include <math.h>
#include <algorithm>
#include <iomanip.h>
#define PI 3.141592653589793238462643383279502884
const int N=11;
using namespace std;
void createFile(){
      ofstream file("file.txt");
      file.close();         
}
void readFile(){
      string buff;
      ifstream file("file.txt");
      while(!file.eof()){
      getline(file, buff);
      cout << buff << endl;
      }
      file.close();         
}
float addFunctionResults(){
ofstream file("file.txt",ios_base::app);
float function;
	  for(float i=-PI;i<PI;i+=0.5)
	  {function=(sin(i)-log(i));
	  	  file << "X=" <<i<<"\t"<<"F(X)="<<scientific<<setiosflags(ios::fixed) <<setprecision(1)<<function<<"\n"<<"----------------------"<<endl;
	  }}  //Zachem pisaTb 4 otdeLbnih faila esli mojno zapihnytb vse v odny
main (){
createFile();
addFunctionResults();
readFile();
     system("pause");     
}
