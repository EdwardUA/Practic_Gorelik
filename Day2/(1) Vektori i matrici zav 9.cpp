/*9.	Масив X(n) розбитий на m фрагментів. У цілочисельному масиві K(m) зберігаються довжини відповідних фрагментів 
(усі ki різні, їх сума дорівнює n). Впорядкувати масив K за зростанням, переставивши відповідні фрагменти в масиві X. 
*/
#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main()
{
    int *arr; 
    int size; 
    cout<<"SkiLbku elementiv v masive"<<endl;
    cout << "n = ";
    cin >> size;


    arr = new int[size];
    srand( time(0) );
    for (int i = 0; i < size; i++) {
       	arr[i]=rand()%10000-rand()%10000;
    }
    cout<<"Ishodniy masiv="<<endl;
for (int i = 0; i < size; i++) {
       	cout<< "arr[" << i << "] = "<<arr[i]<<endl;
    }
    int temp; 

    for (int i = 0; i < size - 1; i++) {//sortirovka pyzirkom
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
cout<<"Vidsortovaniy masiv"<<endl;
    for (int i = 0; i < size; i++) {
    	cout << "arr[" << i << "] = ";
        cout << arr[i] <<endl;
    }
    cout << endl;
    delete [] arr; 
    
    return 0;
}
