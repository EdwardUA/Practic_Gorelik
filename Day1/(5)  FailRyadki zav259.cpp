
/* 259.	Даны натуральное число n, символы s1, ...,sn
Преобразовать последовальность s1, ...,sn, удалив кажний символ *
и повторив кажний символ отличний от '*'. */
#include <iostream>
#include <cstring> 
using namespace std;
 
int main()
{ 
        int gl=0, sg=0, i, j;
        char gls[]="*";// tak mojno vidaliTb lybiy simvol abo poslidovniSb bykv
        char str[100];
        cout<<"Enter string: ";
        cin>>str;
        string str2 = string(str);
        for(i=0; i<(strlen(str)); i++)
          for(j=0; j<strlen(gls); j++)
                        if(str[i]==gls[j])
                        str2.erase(i,1);// vidalyaye  1 simvol iz indeksom "i"
cout<<str2;

        system("pause");
        return 0;
}
