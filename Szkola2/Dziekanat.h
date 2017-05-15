#pragma once
#include <iostream>
using namespace std;
///Klasa Dziekanat - podobiekt klasy Uczelnia
class Dziekanat
{
	///zmienna okreslajaca liczbe pan w dziekanacie
	int liczbaPanZDziekanatu;
	///zmienna okreslajaca czy dziekan jest w swoim gabinecie, czy go nie ma
	bool czyDziekanTuJest;
public:
	///Konstruktor
	Dziekanat();
	///Destruktor
	~Dziekanat();
	void wyswietlZawartosc();
	/**Funkcja umozliwiajaca zmiane liczby pan z dziekanatu
	\param liczbaPanZDziekanatu okresla nowa liczbe pan
	\return funkcja nic nie zwraca
	*/
	void zmienLiczbePanZDziekanatu(int liczbaPanZDziekanatu);
	///Funkcja zmieniajaca wartosc zmiennej czyDziekanTuJest na true
	void dziekanJest();
	///operator strumieniowy <<
	friend ostream& operator <<(ostream &s, Dziekanat& dziekan);
	///operator strumieniowy >>
	friend istream& operator >> (istream &s, Dziekanat&dziekan);
};

