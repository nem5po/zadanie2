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
	os << uczelnia.dziekanat;
}

void Uczelnia::wczytajStan(Uczelnia& uczelnia, istream & is)
{
	BudynekEdukacyjny::wczytajStan(uczelnia, is);
	is >> uczelnia;
	is >> uczelnia.dziekanat;
	//cout << "liczba studentow: " << liczbaStudentow << endl << "liczba wydzialow: " << liczbaWydzialow << endl;
}

void Uczelnia::wyswietlStan()
{
	cout << "Liczba wydzialow: " << liczbaWydzialow << endl << "liczba studentow: " << liczbaStudentow << endl;
	dziekanat.wyswietlZawartosc();
}

void Uczelnia::zmienLiczbeOsob(int nowaLiczbaOsob)
{
	liczbaStudentow = nowaLiczbaOsob;
	cout << "Ta uczelnia ma teraz " << liczbaStudentow << " studentow." << endl;
}

void Uczelnia::pozmieniajParametryDziekanatu()
{
	dziekanat.zmienLiczbePanZDziekanatu(4);
	dziekanat.dziekanJest();
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
