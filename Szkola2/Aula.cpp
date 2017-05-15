#include "Aula.h"



Aula::Aula()
{
	liczbaMiejsc = 150;
	czyJestTuRzutnik = true;
}


Aula::~Aula()
{
}

void Aula::wyswietlZawartosc()
{
	cout << "Liczba miejsc w auli: " << liczbaMiejsc << endl;
	if (czyJestTuRzutnik == true) {
		cout << "W tej auli znajduje sie rzutnik" << endl;
	}
	else {
		cout << "W tej auli nie ma rzutnika!" << endl;
	}
}

ostream & operator<<(ostream & s, Aula & aula)
{
	s << aula.liczbaMiejsc << endl << aula.czyJestTuRzutnik<<endl;
	return s;
}

istream & operator >> (istream & s, Aula & aula)
{
	s >> aula.liczbaMiejsc >> aula.czyJestTuRzutnik;
	return s;
}
