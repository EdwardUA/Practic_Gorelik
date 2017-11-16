
/*37. Godovye ocenki po desjati predmetam za 9-j klass kazhdogo iz 10 uchenikov klassa napechatany v vide tablicy 
(v pervoj stroke — ocenki pervogo uchenika, vo vtoroj — vtorogo i t. d.). Familija uchenika zapisana v pervom stolbce.
 V nachale novogo uchebnogo goda v klass prishel novyj uchenik. Izmenit' tablicu tak, chtoby v nej byla familija i ocenki 
 za 9-j klass novogo uchenika, uchityvaja, chto jetot uchenik v spiske dolzhen byt' na s-m meste.T.e.vnesjon v spisok v sootvetstvii s alfavitom.
*/
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <ctype.h>
 
using namespace std;
struct Class {                                              
    char famil[20];
    int ocen;
    int ocen1;
    int ocen2;
   };
int main()
{   
  Class m[3];
    int i,k;
    for (i=0;i<25;i++)
    { cout<<"VVedite familiy: \t";                  
     cin>>m[i].famil;
     do
     {                                                     
      cout<<"Vvedite ocenki: \t";
     cin>>m[i].ocen;
     cin>>m[i].ocen1;
     cin>>m[i].ocen2;
     }
     while ((m[i].ocen<0)||(m[i].ocen>10)); 
         }
           
                                                     for (i=0;i<3;i++)
     cout<<i+1<<") "<<m[i].famil<<" \t"<<m[i].ocen<<"\t"<<m[i].ocen1<<"\t"<<m[i].ocen2<<endl;    
     
     
                                                      
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}




