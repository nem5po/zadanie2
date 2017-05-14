#include "Sala.h"



Sala::Sala()
{
	liczbaLawek = 10;
	liczbaKrzesel = 2 * liczbaLawek;
	cout << "ok" << endl;
}


Sala::~Sala()
{
}

void Sala::wyswietlZawartosc()
{
	cout << "Liczba lawek: " << liczbaLawek << endl;
	cout << "Liczba krzesel: " << liczbaKrzesel << endl;
}

ostream & operator<<(ostream & out, Sala & sala)
{
	out <<sala.liczbaLawek <<endl<< sala.liczbaKrzesel << endl;
	return out;
}

istream & operator >> (istream & s, Sala & sala)
{
	s >> sala.liczbaLawek >> sala.liczbaKrzesel;
	return s;
}
