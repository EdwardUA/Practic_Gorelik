
/*8. Dan fajl, soderzhashhij tekst na russkom jazyke. Sostavit' v alfavitnom
porjadke spisok vseh slov, vstrechajushhihsja v jetom tekste.
*/
#include<conio>
#include<stdio>
#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string>
struct str{
 std::string ch;
}str_[24];
void main()
{
   std::fstream from("C://test/test.txt", std::ios::in | std::ios::binary);
   if(!from){
    std::cout<<"Not File";
    getch();
    return;
   }
   int n=0, i=1, j;
   char buf[13]={0}, ch='�'; //�������� ����� �� ����� 12 ��������
   std::cout<<"Ne otsortirovan:"<<'\n';
   while (!from.eof()){
    ch='a';
    for(i=0; i<12; i++)
      buf[i]=0;
    for(i=0; i<12 && !from.eof() && ch!=32; i++)
     {from.get(ch); buf[i]=ch;}
     // std::cout<<buf<<"------"<<'\n';
     str_[n].ch=buf;
     std::cout<<str_[n].ch<<'\n';
    n++;
   }
    int s, len;
    std::string ran;
    std::cout<<"Otsortirovan:"<<'\n';
   for(i=0; i<24; i++)
   for(j=i+1; j<24; j++){
    if(str_[i].ch.length() < str_[j].ch.length()) len=str_[i].ch.length(); //���������� �������� �����
    else len=str_[j].ch.length(); //���� ����� ��� ������ ��� �����������
    for(s=0; s<len; s++){
      if(str_[i].ch.substr(s, s+1) > str_[j].ch.substr(s, s+1)){ //���� ������ ���������� ����� ������, �� ������ ������� ����� � ���������� ���� �� ������.
       //��������� ��������� ���� ����� ����������� � ����� ������ ������� � ������ ���������
        ran = str_[i].ch ;
        str_[i].ch=str_[j].ch;
        str_[j].ch=ran;
        break;
       }
      else if(str_[i].ch.substr(s, s+1) == str_[j].ch.substr(s, s+1)){  //���� �����, �� ���������� ��������� ��������
       continue;
      }else{ //���� ��� ���� ����������� ����� ������� � ������ ����� ������� ������, �� ������������� ���� ��������� ��������
       break;
      }
    }
    }
   for(i=0; i<24; i++){
   std::cout << str_[i].ch<<'\n';
    }
   from.close();
   getch();
}



