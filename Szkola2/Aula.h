#pragma once
#include <iostream>
using namespace std;

class Aula
{
	int liczbaMiejsc;
	bool czyJestTuRzutnik;
public:
	Aula();
	~Aula();

	friend ostream& operator<<(ostream &s, Aula &aula);
	friend istream& operator >> (istream &s, Aula &aula);
	void wyswietlZawartosc();
};

