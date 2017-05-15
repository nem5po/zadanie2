#include "Sala.h"



Sala::Sala()
{
	liczbaLawek = 10;
	liczbaKrzesel = 2 * liczbaLawek;
}


Sala::~Sala()
{
}

void Sala::wyswietlZawartosc()
{
	cout << "Liczba lawek: " << liczbaLawek << endl;
	cout << "Liczba krzesel: " << liczbaKrzesel << endl;
}

ostream & operator<<(ostream & s, Sala & sala)
{
	s <<sala.liczbaLawek <<endl<< sala.liczbaKrzesel << endl;
	return s;
}

istream & operator >> (istream & s, Sala & sala)
{
	s >> sala.liczbaLawek >> sala.liczbaKrzesel;
	return s;
}
