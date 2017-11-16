
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
        char str[100];
        cout<<"Enter string: ";
        cin>>str;
        
        for(i=0; i<(strlen(str)); i++)
                for(j=0; j<strlen(gls); j++)
                        if(str[i]==gls[j] || str[i]==GLS[j])
                                gl++;
        cout<<endl<<"Vowels  - "<<gl<<endl;
        cout<<"Vovels lerers :";
         for (int i = 0; i <100; i++){
         	for(j=0; j<strlen(gls); j++){
         	if(str[i]==gls[j] || str[i]==GLS[j]){
         		cout  << str[i] << ",";
			 }}
		 }
		 
        system("pause");
        return 0;
}
