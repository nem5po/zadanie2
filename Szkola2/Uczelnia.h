#pragma once
#include "BudynekEdukacyjny.h"
#include "Aula.h"
#include "Dziekanat.h"
#include <vector>

class Uczelnia :
	public BudynekEdukacyjny
{
private:
	vector<Aula>aule;
	Dziekanat dziekanat;
protected:
	int liczbaStudentow;
	int liczbaWydzialow;
public:
	Uczelnia();
	~Uczelnia();
		
	void zapiszStan(Uczelnia& uczelnia,ostream& os);
	void wczytajStan(Uczelnia& uczelnia,istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
	void pozmieniajParametryDziekanatu();
	void stworzAule(int ileAuli);
	void dodajAule(Aula &aulaWykladowa);

	friend ostream& operator <<(ostream &s, Uczelnia &uczelnia);
	friend istream& operator >> (istream &s, Uczelnia &uczelnia);
};

