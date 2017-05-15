#pragma once
#include <iostream>
using namespace std;

class Dziekanat
{
	int liczbaPanZDziekanatu;
	bool czyDziekanTuJest;
public:
	Dziekanat();
	~Dziekanat();
	void wyswietlZawartosc();
	void zmienLiczbePanZDziekanatu(int liczbaPanZDziekanatu);
	void dziekanJest();

	friend ostream& operator <<(ostream &s, Dziekanat& dziekan);
	friend istream& operator >> (istream &s, Dziekanat&dziekan);
};

