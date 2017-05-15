#pragma once
#include <iostream>
using namespace std;

/// Klasa bazowa - abstrakcyjna
class BudynekEdukacyjny
{
private:
	/// zmienna liczbowa - ile lat istnieje ten budynek edukacyjny
	int ileLatIstnieje;
public:
	/// konstruktor domyslny
	BudynekEdukacyjny();
	///destruktor wirtualny
	virtual ~BudynekEdukacyjny();
	
	///Funkcja umozliwiajaca zapisywanie stanu obiektu do pliku
	void zapiszStan(BudynekEdukacyjny& budynekEdukacyjny, ostream& os);
	///Funkcja umozliwiajaca odczytywanie stanu obiektu z pliku
	void wczytajStan(BudynekEdukacyjny& budynekEdukacyjny, istream& is);
	/// Funkcja wirtualna wyswietlajaca stan obiektu
	virtual void wyswietlStan() = 0;
	/** Funkcja wirtualna zmieniajaca liczbe osob w poszczegolnych obiektach dziedziczacych po klasie BudynekEdukacyjny
	\param nowaLiczbaOsob - jest nowa liczba uczniow/studentow/maturzystow
	*/
	virtual void zmienLiczbeOsob(int nowaLiczbaOsob) = 0;

	/// Operator strumieniowy <<
	friend ostream& operator <<(ostream &s, BudynekEdukacyjny &budynek);
	/// Operator strumieniowy >>
	friend istream& operator >>(istream &s, BudynekEdukacyjny &budynek);
};

