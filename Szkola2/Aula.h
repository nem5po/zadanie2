#pragma once
#include <iostream>
using namespace std;

class Aula
{
public:
	Aula();
	int liczbaMiejsc;
	bool czyJestTuRzutnik;
	~Aula();

	friend ostream& operator<<(ostream &out, Aula &aula);
	friend istream& operator >> (istream &s, Aula &aula);
	void wyswietlZawartosc();
};

