
/*2.Iz dannogo spiska sportsmenov raspechatat' svedenija o teh
iz nih, kto zanimaetsja plavaniem. Ukazat' vozrast, skol'ko let
oni zanimajutsja sportom.
*/
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
const int N =5; //sportsmenu
const int N2 =5; //vidi sporta
struct Tfullname{
       char Sportsmen[100];
       };
       
struct Tstudent{
       Tfullname a;
       char Nazva[100];     
       int Godov;    
       };
        
main(){ 
        srand(time(NULL));
        Tstudent student[N];
for (int i =0;i<N;i++)
{cout<<"Vedit Sportsmena:";
    cin>>student[i].a.Sportsmen;
    cout<<"Vedit sport:";
    cin>>student[i].Nazva;
    cout<<"Vedit god:";
    cin>>student[i].Godov;}
    
    for (int i =0;i<N2;i++){
        cout<<"--------------------"<<endl;
        cout<<"Sportsmen: ";
        cout<<student[i].a.Sportsmen<<"; "<<endl;
        cout<<"Nazva Sporty: ";
        cout<<student[i].Nazva<<"; "<<endl; 
        cout<<"Godov v sporte: ";
        cout<<student[i].Godov<<"; "<<endl;
        cout<<"--------------------"<<endl; 
           }

system("pause");
       return 0;
       
       
       }


