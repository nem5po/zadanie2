#pragma once
#include <iostream>
using namespace std;

class Sekretariat
{
	/*int ilePomieszczen;
	int liczbaSekretarek;
	bool czyDyrektorTuJest; */
public:
	int ilePomieszczen;
	int liczbaSekretarek;
	bool czyDyrektorTuJest;
	Sekretariat();
	~Sekretariat();
	void wyswietlZawartosc();
	//zmiana parametrow
	void dodatkowePomieszczenieDlaVice();
	void zmienLiczbeSekretarek(int liczbaSekretarek);
	void dyrektorJest();
	//operator
	void operator[](int i);
	friend ostream& operator <<(ostream &s, Sekretariat&sekret);
	friend istream& operator >> (istream &s, Sekretariat&sekret);
};

