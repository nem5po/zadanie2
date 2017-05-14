#pragma once
#include "BudynekEdukacyjny.h"
#include "Sala.h"
#include "Sekretariat.h"
#include <vector>

class Szkola :
	public BudynekEdukacyjny
{
public:
	Szkola();
	~Szkola();
	int liczbaUczniow;
	int liczbaSal;
	vector<Sala>sala;
	Sekretariat sekretariat;
	//Sala *sala;
	void zapiszStan(Szkola&szkola, ostream& os);
	void wczytajStan(Szkola&szkola,istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
//	void stworzSale(Szkola&szkola, int ileSal);
	///////////////
	void stworzSale(int ileSal);
	void dodajSale(Sala &salaLekcyjna);
	void pozmieniajParametrySekretariatu();
	////////////
	void zapisz(Szkola &szkola);

	friend ostream& operator <<(ostream &s, Szkola &szkola);
	friend istream& operator >>(istream &s, Szkola &szkola);
	//Szkola operator+(const Sala &sala);
};

