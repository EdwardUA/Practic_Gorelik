/*9.	Масив X(n) розбитий на m фрагментів. У цілочисельному масиві K(m) зберігаються довжини відповідних фрагментів 
(усі ki різні, їх сума дорівнює n). Впорядкувати масив K за зростанням, переставивши відповідні фрагменти в масиві X. 
*/
#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main()
{
    int *arr; // указатель для выделения памяти под массив
    int size; // размер массива
    
    // Ввод количества элементов массива
    cout<<"SkiLbku elementiv v masive"<<endl;
    cout << "n = ";
    cin >> size;


    arr = new int[size]; // выделение памяти под массив

    // заполнение массива
    srand( time(0) );
    for (int i = 0; i < size; i++) {
       	arr[i]=rand()%10000-rand()%10000;
    }
    cout<<"Ishodniy masiv="<<endl;
for (int i = 0; i < size; i++) {
       	cout<< "arr[" << i << "] = "<<arr[i]<<endl;
    }
    int temp; // временная переменная для обмена элементов местами

    // Сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
cout<<"Vidsortovaniy masiv"<<endl;
    // Вывод отсортированного массива на экран
    for (int i = 0; i < size; i++) {
    	cout << "arr[" << i << "] = ";
        cout << arr[i] <<endl;
    }
    cout << endl;

    delete [] arr; // освобождение памяти;
    
    return 0;
}
