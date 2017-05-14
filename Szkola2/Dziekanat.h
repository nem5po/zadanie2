#pragma once
#include <iostream>
using namespace std;

class Dziekanat
{
public:
	//int ilePomieszczen;
	int liczbaPanZDziekanatu;
	bool czyDziekanTuJest;
	Dziekanat();
	~Dziekanat();
	void wyswietlZawartosc();
	void zmienLiczbePanZDziekanatu(int liczbaPanZDziekanatu);
	void dziekanJest();

	friend ostream& operator <<(ostream &s, Dziekanat& dziekan);
	friend istream& operator >> (istream &s, Dziekanat&dziekan);
};

