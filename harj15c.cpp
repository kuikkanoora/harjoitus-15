/*************************************************************************************************************************************************************
*Teht�v�: Harjoitus15c
*Tekij�: Noora Kuikka
*PVM: 24.10.2013
*Kuvaus:
*T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!
*
*Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
*pitk�n merkkijonon (ei v�lily�ntej�).
*a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
*(tulostus tyyppi� "cout << mjono1[4];" jne)
*b) Ohjelma k��nt�� annetun merkkijonon toiseen
*merkkijonoon ja tulostaa sen n�yt�lle
*(tulostus tyyppi� "cout << mjono2;")
*c) merkkijono voi olla kuinka pitk�
*tahansa (max 100 kirjainta).
*Sy�tetyn merkkijonon pituutta ei saa
*laskea mill��n kirjastofunktiolla
*(esim. lenght tms.) Ohjelma
*tutkii onko annettu merkkijono
*palindromi ja ilmoittaa sen k�ytt�j�lle.
*V�lily�nnit jonossa ovat sallittuja.
*
*K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
*ohjelma tulostaa: eelevak_assiK_CBA
*Versio 1.0 H4719 24.10.2013
**************************************************************************************************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char usrline[101];
	int begin; int middle; int end; int length = 0;

	cout << "Enter a string to find out whether or not it is a palindrome: ";
	cin >> usrline;

	while(usrline[length] != '\0')
		length++;

	end = length -1;
	middle = length/2;

	for(begin = 0; begin < middle; begin++)
	{
		if(usrline[begin] != usrline[end])
		{
			cout << "The string is not a palindrome.\n";
			break;
		}
		end--;
	}
	if(begin == middle)
		cout << "The string is a palindrome.\n";
	return 0;
}








