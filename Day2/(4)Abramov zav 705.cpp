/*705. ���� ���������� ������� A � B ������� n (2x2,3x3...nxn)
�������� ������� A(b-E)+C, ��� �-��������� ������� ������� n
, � �������� ������� � ����������� �� �������:
C[i,j]=1/(1+j), i,j=1,2...n
*/
#include <iostream>
#include <cstdlib>
#include<time.h>
#include <iomanip>
using namespace std;
const int N =3;
const int M =3;
int main()
{int a[N][N];
int b[N][N];
int e[N][N];
int c[N][N];
int BminusE[N][N];
int AmultBminusE[N][N];
int Result[N][N];
srand( time(0) );
  for (int i = 0; i < N; i++) 
  for (int j = 0; j < N; j++){a[i][j]=rand()%10;}
    
  for (int i = 0; i < N; i++) 
  for (int j = 0; j < N; j++){b[i][j]=rand()%10;}
    	
    for (int i=0; i<N; i++)
    for (int j=0; j<N; j++){
            if (i==j) 
            {e[i][j]=1;}               
            else 
            {e[i][j]=0;}
        }
        
  for (int i = 0; i < N; i++) 
  for (int j = 0; j < N; j++){c[i][j]=rand()%10;}
  
  for (int i = 0+1; i < N+1; i++) 
  for (int j = 0+1; j < N+1; j++){c[i][j]=1/(i+j);}
    
cout<<"	A  B  C  E"<<endl;
for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
       	cout<<"["<<i<<"]"<<"["<<j<<"]"<<"= "<<a[i][j]<<"  "<<b[i][j]<<"  "<<c[i][j]<<"  "<<e[i][j]<<endl;
for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
       BminusE[i][j]=b[i][j]-e[i][j];
    }

for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
       AmultBminusE[i][j]=a[i][j] * BminusE[i][j];
    }


for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
      Result[i][j] =AmultBminusE[i][j] + c[i][j];
    }
cout<<"f1=(B-E)"<<endl<<"f2=A(B-E)"<<endl<<"f3=A(B-E)+C"<<endl;
cout<<"	f1 f2 f3"<<endl;
 for (int i = 0; i < N; i++) 
for (int j = 0; j < N; j++){
       cout<<"["<<i<<"]"<<"["<<j<<"]"<<"= "<<BminusE[i][j]<<"  "<< AmultBminusE[i][j]<<"  "<<Result[i][j]<<endl;
       
    }
    
    
    return 0;
}}
