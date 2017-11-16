
/*6.Zapisat' v fajl posledovatel'nogo dostupa ./V proizvol'nyh
natural'nyh chisel. Perepisat' v drugoj fajl posledovatel'nogo
dostupa te jelementy, kotorye kratny K. Vyvesti poluchennyj fajl
na pechat'.
*/
#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    const int n=20;
    int nn[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int k=3;
    int buf;
    ofstream fout;
    ifstream fin1, fin2;
    fout.open("fout.txt");
    for(int i = 0; i<n; i++)
        fout << nn[i] << ' ';
    fout.close();
    fin1.open("fout.txt");
    fout.open("fout2.txt");
    while(fin1 >> buf) {
        if(buf%k==0) fout << buf << ' ';
    }
    fout.close();
    fin1.close();
    fin2.open("fout2.txt");
    while(fin2 >> buf) {
        cout << buf << ' ';
    }
    cout << endl;
    fin2.close();
    return 0;
}



