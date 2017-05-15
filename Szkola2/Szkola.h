#pragma once
#include "BudynekEdukacyjny.h"
#include "Sala.h"
#include "Sekretariat.h"
#include <vector>

class Szkola :
	public BudynekEdukacyjny
{
private:
	vector<Sala>sala;
	Sekretariat sekretariat;
protected:
	int liczbaUczniow;
	int liczbaSal;
public:
	Szkola();
	~Szkola();
	
	void zapiszStan(Szkola&szkola, ostream& os);
	void wczytajStan(Szkola&szkola,istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);

	void stworzSale(int ileSal);
	void dodajSale(Sala &salaLekcyjna);
	void pozmieniajParametrySekretariatu();
	

	friend ostream& operator <<(ostream &s, Szkola &szkola);
	friend istream& operator >>(istream &s, Szkola &szkola);
	
};

