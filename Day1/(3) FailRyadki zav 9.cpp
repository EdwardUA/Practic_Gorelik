
/* 9.	ϳ��� �������� � ��������� ��������� ����� ������� �� ����� ��� ����� �� ������������� � ����� ��������� 
� �������, ����������� ����������. ������� ����� ������� ����������� � ����� �������� �������; 
���� ������� ����������� ��������.*/ 
   #include <iostream>
#include <string.h>
//const int N =10;
using namespace std;
int main() {
	cout<<"SkoiLbko slov vvesti?(int) : ";
	int N;
	cin>>N;
    char **mass = new char *[N];
    cout<<"Vvodite : "<<endl;
        
for(int i = 0; i<N;i++) {
        mass[i] = new char[20];
        cin >> mass[i];}
      
for(int i = 0 ; i < N; i++){
        for(int j = i+1; j < N; j++)
            if(strcmp(mass[i], mass[j]) > 0){
                char* tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
				}}
                
cout<<"\nV alfavitnom:\n"<<endl;
    for(int i = 0; i < N; i++){
        cout << mass[i] << endl;}
        
        
        for(int i = 0 ; i < N; i++){
        for(int j = i+1; j < N; j++)
            if(strcmp(mass[j], mass[i]) > 0){
                char* tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;}}

cout<<"\nV obratno:\n"<<endl;
    for(int i = 0; i < N; i++){
        cout << mass[i] << endl;}
        return 0;
        delete[] mass;
}

