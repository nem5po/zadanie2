#pragma once
#include <iostream>
using namespace std;
class BudynekEdukacyjny
{
public:
	BudynekEdukacyjny();
	virtual ~BudynekEdukacyjny();
	int numer; // zmienic na cos

	void zapiszStan(BudynekEdukacyjny& budynekEdukacyjny, ostream& os);
	void wczytajStan(BudynekEdukacyjny& budynekEdukacyjny, istream& is);
	virtual void wyswietlStan() = 0;
	virtual void zmienLiczbeOsob(int nowaLiczbaOsob) = 0;

	friend ostream& operator <<(ostream &s, BudynekEdukacyjny &budynek);
	friend istream& operator >>(istream &s, BudynekEdukacyjny &budynek);
};

