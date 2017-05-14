#pragma once
#include "BudynekEdukacyjny.h"
#include "Dziekanat.h"

class Uczelnia :
	public BudynekEdukacyjny
{
public:
	Uczelnia();
	~Uczelnia();
	int liczbaStudentow;
	int liczbaWydzialow;
	Dziekanat dziekanat;
	void zapiszStan(Uczelnia& uczelnia,ostream& os);
	void wczytajStan(Uczelnia& uczelnia,istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
	void pozmieniajParametryDziekanatu();

	friend ostream& operator <<(ostream &s, Uczelnia &uczelnia);
	friend istream& operator >> (istream &s, Uczelnia &uczelnia);
};

