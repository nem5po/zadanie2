#pragma once
#include <iostream>
using namespace std;
///Klasa Sekretariat - podobiekt do klasy Szkola
class Sekretariat
{
	///zmienna okreslajaca liczbe pomieszczen w sekretariacie
	int ilePomieszczen;
	///zmienna okreslajaca liczbe sekretarek w sekretariacie
	int liczbaSekretarek;
	///zmienna okreslajaca czy dyrektor jest w swoim gabinecie, czy go nie ma
	bool czyDyrektorTuJest;
public:
	///Konstruktor
	Sekretariat();
	///Destruktor
	~Sekretariat();
	///Funkcja umozliwiajaca wyswietlenie zawartosci obiektu sekretariat
	void wyswietlZawartosc();
	//zmiana parametrow
	///Funkcja zwiekszajaca o 1 liczbe pomieszczen w sekretariacie
	void dodatkowePomieszczenieDlaVice();
	/**Funkcja zmieniajaca liczbe sekretarek w sekretariacie
	\param liczbaSekretarek okresla nowa liczbe sekretarek
	\return funkcja nic nie zwraca*/
	void zmienLiczbeSekretarek(int liczbaSekretarek);
	///Funkcja zmieniajaca wartosc zmiennej czyDyrektorTuJest na true
	void dyrektorJest();
	///operator strumieniowy <<
	friend ostream& operator <<(ostream &s, Sekretariat&sekret);
	///operator strumieniowy >>
	friend istream& operator >> (istream &s, Sekretariat&sekret);
};

