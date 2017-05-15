#pragma once
#include <iostream>
using namespace std;

///Klasa Aula - podobiekt klasy Uczelnia
class Aula
{
	///zmienna okreslajaca ilosc miejsc dla studentow w auli
	int liczbaMiejsc;
	///zmienna okreslaja czy w auli znajduje sie rzutnik, czy nie
	bool czyJestTuRzutnik;
public:
	///Konstruktor
	Aula();
	///Destruktor
	~Aula();
	///operator strumieniowy <<
	friend ostream& operator<<(ostream &s, Aula &aula);
	///operator strumieniowy >>
	friend istream& operator >> (istream &s, Aula &aula);
	///Funkcja umozliwiajaca wyswietlanie zawartosci auli
	void wyswietlZawartosc();
};

