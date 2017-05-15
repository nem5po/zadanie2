#pragma once
#include <iostream>
using namespace std;

///Klasa Sala - podobiekt do klasy Szkola
class Sala
{
	///zmienna okreslajaca liczbe lawek w sali
	int liczbaLawek;
	///zmienna okreslajaca liczbe krzesel w sali
	int liczbaKrzesel;
public:
	///Konstruktor
	Sala();	
	///Destruktor
	~Sala();
	///operator strumieniowy <<
	friend ostream& operator<<(ostream &s, Sala &sala);
	///operator strumieniowy >>
	friend istream& operator >> (istream &s, Sala &sala);
	///Funkcja umozliwiajaca wyswietlenie zawartosci sali
	void wyswietlZawartosc();
};

