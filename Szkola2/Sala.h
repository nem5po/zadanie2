#pragma once
#include <iostream>
using namespace std;

class Sala
{
	int liczbaLawek;
	int liczbaKrzesel;
public:
	Sala();	
	~Sala();
	friend ostream& operator<<(ostream &s, Sala &sala);
	friend istream& operator >> (istream &s, Sala &sala);
	void wyswietlZawartosc();
};

