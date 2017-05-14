#include "Dziekanat.h"



Dziekanat::Dziekanat()
{
	liczbaPanZDziekanatu = 2;
	czyDziekanTuJest = false;
}


Dziekanat::~Dziekanat()
{
}

void Dziekanat::wyswietlZawartosc()
{
	cout << "Liczba pan z dziekanatu: " << liczbaPanZDziekanatu << endl;
	if (czyDziekanTuJest == true) {
		cout << "Dziekan jest u siebie" << endl;
	}
	else {
		cout << "Niestety dziekana nie ma" << endl;
	}
}

void Dziekanat::zmienLiczbePanZDziekanatu(int liczbaPanZDziekanatu)
{
	this->liczbaPanZDziekanatu = liczbaPanZDziekanatu;
}

void Dziekanat::dziekanJest()
{
	czyDziekanTuJest = true;
}

ostream & operator<<(ostream & s, Dziekanat & dziekan)
{
	s << dziekan.liczbaPanZDziekanatu << endl << dziekan.czyDziekanTuJest;
	return s;
}

istream & operator >> (istream & s, Dziekanat & dziekan)
{
	s >> dziekan.liczbaPanZDziekanatu >> dziekan.czyDziekanTuJest;
	return s;
}
