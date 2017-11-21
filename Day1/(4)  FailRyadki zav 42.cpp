
/* 42.	Після введення з клавіатури рядка довільного розміру видати на екран рядок із голосними літерами кирилиці,
 які залишились, а також їх кількість.*/
#include <iostream>
#include <cstring> 
using namespace std;
 
int main()
{ 
        int gl=0, sg=0, i, j;
        char gls[]="aeiouy";
        char GLS[]="AEIOUY";
        char slovo[100];
        cout<<"Enter string: ";
        cin>>slovo;
        for(i=0; i<(strlen(slovo)); i++)
                for(j=0; j<strlen(gls); j++)
                        if(slovo[i]==gls[j] || slovo[i]==GLS[j])
                                gl++;
        cout<<endl<<"Kilbkistb golosnih "<<gl<<endl;
        cout<<"Vovels lerers :";
         for (int i = 0; i <100; i++){
         	for(j=0; j<strlen(gls); j++){
         	if(slovo[i]==gls[j] || slovo[i]==GLS[j]){
         		cout  << slovo[i] << ",";
			 }}
		 }
		 
        system("pause");
        return 0;
}
