#pragma once
#include "Szkola.h"

//Klasa Ponadgimnazjalna, dziedziczy po klasie Szkola
class Ponadgimnazjalna :
	public Szkola
{
private:
	///zmienna okreslajaca, czy jest to Liceum Ogolnoksztalcace, czy Technikum
	bool czyToLO;
	///zmienna okreslajaca liczbe maturzystow w tej szkole
	int liczbaMaturzystow;
public:
	///Konstruktor
	Ponadgimnazjalna();
	///Destruktor
	~Ponadgimnazjalna();
	
	///Funkcja umozliwiajaca zapisywanie stanu obiektu do pliku
	void zapiszStan(Ponadgimnazjalna& ponadgimnazjalna, ostream& os);
	///Funkcja umozliwiajaca odczytywanie stanu obiektu z pliku
	void wczytajStan(Ponadgimnazjalna& ponadgimnazjalna, istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
	///operator strumieniowy <<
	friend ostream& operator <<(ostream &s, Ponadgimnazjalna &ponadgim);
	///operator strumieniowy >>
	friend istream& operator >> (istream &s, Ponadgimnazjalna &ponadgim);

};

