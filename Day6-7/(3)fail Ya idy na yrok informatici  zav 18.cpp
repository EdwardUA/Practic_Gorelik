
/*18. Imeetsja tipizirovannyj fajl, jelementami kotorogo
javljajutsja otdel'nye bukvy. Poluchit' slovo, obrazovannoe jelementami
fajla, imejushhimi chetnyj porjadkovyj nomer.
*/
#include<fstream>
#include<string>
#include <conio.h>
#include <iostream>
using namespace std;
main(){
ifstream fs("file.txt");

string str;
char c;
while(fs.get(c))
{
    str+=c;
    fs.get();
}
cout<<str;   
system("pause");
return 0;   
 }




