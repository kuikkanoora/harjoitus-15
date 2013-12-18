/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus15b
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
	char usrline1[18]; char usrline2[18];

	cout << "Please type in a string that is 17 characters long (no spaces): ";
	cin >> usrline1;

	strcpy_s(usrline2,usrline1);
	_strrev(usrline2);

	cout << "\nThe reversed string: " << usrline2 << "\n";

	return 0;
}