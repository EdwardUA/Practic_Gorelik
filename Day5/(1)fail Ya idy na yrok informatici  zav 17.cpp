/*
Izvestny bally, nabrannye kazhdym iz 20 sportsmenov-
pjatiborcev v kazhdom iz pjati vidov sporta. Opredelit'
familiju sportsmena — pobeditelja sorevnovanij.

*/
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
const int N2 =5;// vidi sportov
struct Tfullname{
       char Prizv[100];
       char Imya[100];
       char Pob[100];
       };
       
struct Tstudent{
       Tfullname a;
       int sport[N2];  
       int sumabalov [N2];     
       };
        
main(){ int N;
cout<<"SkoLbko sportsmenov"<<endl;
cin>>N;
        srand(time(NULL));
        Tstudent student[N];
for (int i =0;i<N;i++)
{cout<<"---"<<" Sportsmen No "<<"["<<i<<"]"<<":"<<"---\n";
cout<<"Vedit Prizv:";
    cin>>student[i].a.Imya;
    cout<<"Vedit Imya:";
    cin>>student[i].a.Pob;
    cout<<"Vedit Pob:";
    cin>>student[i].a.Prizv;
    
    for (int j =0;j<N2;j++){
        student[i].sport[j]=rand()%5+1; }
}
for (int i =0;i<N;i++)
{cout<<student[i].a.Imya<<"   ";
    cout<<student[i].a.Pob<<"   ";;
    cout<<student[i].a.Prizv<<"   ";;
 
    
    for (int j =0;j<N2;j++){
        cout<<student[i].sport[j]<<" "; 
           }cout<<endl;
}


//-------------------
/* for (int i =0;i<N2;i++){
     for (int j =0;j<N2;j++){
     for (int z =0;z<N2;z++){
        student[i].sumabalov[j]+=student[i].sport[j]; }
           }
           }
            for (int i =0;i<N2;i++){
     for (int j =0;j<N2;j++){
     for (int z =0;z<N2;z++){
        cout<<student[i].sumabalov[j]; }
           }
           }*/
           
     
     //-------------------
     


	       system("pause");
       return 0;
       
       
       }




