#include "Uczelnia.h"



Uczelnia::Uczelnia()
{
	liczbaStudentow = 1000;
	liczbaWydzialow = 5;
}


Uczelnia::~Uczelnia()
{
}

void Uczelnia::zapiszStan(Uczelnia& uczelnia, ostream & os)
{
	BudynekEdukacyjny::zapiszStan(uczelnia, os);
	os << uczelnia<<endl;
	for (int i = 0; i < uczelnia.aule.size(); i++)
		os << uczelnia.aule[i];
	os << uczelnia.dziekanat;
}

void Uczelnia::wczytajStan(Uczelnia& uczelnia, istream & is)
{
	BudynekEdukacyjny::wczytajStan(uczelnia, is);
	is >> uczelnia;
	for (int i = 0; i < uczelnia.aule.size(); i++)
		is>> uczelnia.aule[i];
	is >> uczelnia.dziekanat;
}

void Uczelnia::wyswietlStan()
{
	cout << "Liczba wydzialow: " << liczbaWydzialow << endl << "liczba studentow: " << liczbaStudentow << endl;
	for (int i = 0; i < aule.size(); i++)
		aule[i].wyswietlZawartosc();
	dziekanat.wyswietlZawartosc();
}

void Uczelnia::zmienLiczbeOsob(int nowaLiczbaOsob)
{
	liczbaStudentow = nowaLiczbaOsob;
	cout << "Ta uczelnia ma teraz " << liczbaStudentow << " studentow." << endl;
}

void Uczelnia::pozmieniajParametryDziekanatu(int ilePanZDziekanatu)
{
	dziekanat.zmienLiczbePanZDziekanatu(ilePanZDziekanatu);
	dziekanat.dziekanJest();
}

void Uczelnia::stworzAule(int ileAuli)
{
	for (int i = 0; i < ileAuli; i++)
		aule.push_back(Aula());
	
}

void Uczelnia::dodajAule(Aula & aulaWykladowa)
{
	aule.push_back(aulaWykladowa);
}

ostream & operator<<(ostream & s, Uczelnia & uczelnia)
{
	s << uczelnia.liczbaStudentow << endl << uczelnia.liczbaWydzialow;
	return s;
}

istream & operator >> (istream & s, Uczelnia & uczelnia)
{
	s >> uczelnia.liczbaStudentow >> uczelnia.liczbaWydzialow;
	return s;
}
