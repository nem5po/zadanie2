#pragma once
#include <iostream>
using namespace std;

class Sala
{
	
public:
	Sala();
	int liczbaLawek;
	int liczbaKrzesel;
	~Sala();
	friend ostream& operator<<(ostream &out, Sala &sala);
	friend istream& operator >> (istream &s, Sala &sala);
	void wyswietlZawartosc();
};

