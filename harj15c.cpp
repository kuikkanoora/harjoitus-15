/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus15c
*Tekijä: Noora Kuikka
*PVM: 24.10.2013
*Kuvaus:
*TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!
*
*Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
*pitkän merkkijonon (ei välilyäntejä).
*a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
*(tulostus tyyppiä "cout << mjono1[4];" jne)
*b) Ohjelma kääntää annetun merkkijonon toiseen
*merkkijonoon ja tulostaa sen näytälle
*(tulostus tyyppiä "cout << mjono2;")
*c) merkkijono voi olla kuinka pitkä
*tahansa (max 100 kirjainta).
*Syätetyn merkkijonon pituutta ei saa
*laskea millään kirjastofunktiolla
*(esim. lenght tms.) Ohjelma
*tutkii onko annettu merkkijono
*palindromi ja ilmoittaa sen käyttäjälle.
*Välilyännit jonossa ovat sallittuja.
*
*Käyttäjä syättää jonon: ABC_Kissa_kavelee
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








