#include "Ponadgimnazjalna.h"
#include <fstream>



Ponadgimnazjalna::Ponadgimnazjalna()
{
	//Rodzaj rodzajSzkoly;
	czyToLO = true;
	liczbaMaturzystow = 100;
}


Ponadgimnazjalna::~Ponadgimnazjalna()
{
}

void Ponadgimnazjalna::zapiszStan(Ponadgimnazjalna& ponadgimnazjalna,ostream & os)
{
	Szkola::zapiszStan(ponadgimnazjalna,os);
	os << ponadgimnazjalna;

}

void Ponadgimnazjalna::wczytajStan(Ponadgimnazjalna& ponadgimnazjalna,istream & is)
{
	Szkola::wczytajStan(ponadgimnazjalna,is);
	is >> ponadgimnazjalna;
	//cout << "liczbaMaturzystow: " << liczbaMaturzystow << endl;
}

void Ponadgimnazjalna::wyswietlStan()
{
	Szkola::wyswietlStan();
	if (czyToLO == true) {
		cout << "To jest liceum ogolnoksztalcace" << endl;
	}
	else {
		cout << "To jest technikum" << endl;
	}
	cout << "Liczba maturzystow: " << liczbaMaturzystow << endl;
}

void Ponadgimnazjalna::zmienLiczbeOsob(int nowaLiczbaOsob)
{
	liczbaMaturzystow = nowaLiczbaOsob;
	cout << "Ta szkola ma teraz " << liczbaMaturzystow << " maturzystow." << endl;
}

void Ponadgimnazjalna::zapisz(Ponadgimnazjalna & szkola)
{
	//Szkola::zapisz(szkola);
	ofstream plik("budynki.txt");
	Szkola::zapisz(szkola);
	plik << szkola;
	plik.close();
}


ostream & operator<<(ostream & s, Ponadgimnazjalna & ponadgim)
{
	s << ponadgim.liczbaMaturzystow << endl << ponadgim.czyToLO;
	return s;
}

istream & operator >> (istream & s, Ponadgimnazjalna &ponadgim)
{
	s >> ponadgim.liczbaMaturzystow >> ponadgim.czyToLO;
	
	return s;
}
