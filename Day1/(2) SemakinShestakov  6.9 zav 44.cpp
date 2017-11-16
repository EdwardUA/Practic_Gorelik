
/* 44. Shifracija. Odin iz metodov shifracii nazyvaetsja nalozheniem
gammy. Delaetsja jeto sledujushhim obrazom: beretsja nekotoroe
sluchajnoe chislo v diapazone ot 127 do 255 — gamma, i kod kazhdogo
simvola stroki zamenjaetsja kodom, poluchajushhimsja v rezul'tate
operacii: novyj kod=staryj kod XOR gamma.
Napisat' programmu, realizujushhuju:
a) dannyj metod shifracii;
b) deshifraciju stroki pri zadannoj gamme.
Vhodnye dannye: shifruemaja stroka.
Vyhodnye dannye:
• gamma;
• zashifrovannaja stroka.
4
*/

#include <iostream>
#include <string.h>
#include<cstdlib>
#include<time.h>
int main()
{
	char stroka[255];
	unsigned char gamma = 127;
	srand( time(0) );
	gamma=gamma+rand()%255;
std::cout <<"Vvedite slovo: ";
	std::cin >> stroka;
std::cout<<"III,ifr: ";
	//Шифрование
	for (int i = 0; i != strlen(stroka); i++)
	{
		stroka[i] = stroka[i] ^ gamma; //новый код=старый код XOR гамма
	
	    std::cout <<stroka[i];
	}

	

	//Сейчас stroka зашифрована
std::cout<<std::endl <<"RazIII,ifrovka:";
	//Расшифровка
	for (int i = 0; i != strlen(stroka); i++)
	{
		stroka[i] = stroka[i] ^ gamma;
			std::cout <<stroka[i];
		
	}

	//Сейчас stroka расшифрована

	return 0;
}
