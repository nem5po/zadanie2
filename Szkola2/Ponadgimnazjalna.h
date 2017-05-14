#pragma once
#include "Szkola.h"
class Ponadgimnazjalna :
	public Szkola
{
public:
	Ponadgimnazjalna();
	~Ponadgimnazjalna();
	bool czyToLO;
	int liczbaMaturzystow;

	void zapiszStan(Ponadgimnazjalna& ponadgimnazjalna, ostream& os);
	void wczytajStan(Ponadgimnazjalna& ponadgimnazjalna, istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
	//////////
	void zapisz(Ponadgimnazjalna &szkola);


	friend ostream& operator <<(ostream &s, Ponadgimnazjalna &ponadgim);
	friend istream& operator >> (istream &s, Ponadgimnazjalna &ponadgim);

};

