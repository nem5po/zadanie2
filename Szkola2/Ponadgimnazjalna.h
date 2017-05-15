#pragma once
#include "Szkola.h"
class Ponadgimnazjalna :
	public Szkola
{
private:
	bool czyToLO;
	int liczbaMaturzystow;
public:
	Ponadgimnazjalna();
	~Ponadgimnazjalna();
	

	void zapiszStan(Ponadgimnazjalna& ponadgimnazjalna, ostream& os);
	void wczytajStan(Ponadgimnazjalna& ponadgimnazjalna, istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
	
	friend ostream& operator <<(ostream &s, Ponadgimnazjalna &ponadgim);
	friend istream& operator >> (istream &s, Ponadgimnazjalna &ponadgim);

};

