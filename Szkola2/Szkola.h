#pragma once
#include "BudynekEdukacyjny.h"
#include "Sala.h"
#include "Sekretariat.h"
#include <vector>

///Klasa Szkola, dziedziczy po klasie BudynekEdukacyjny
class Szkola :
	public BudynekEdukacyjny
{
private:
	///wektor przechowujacy obiekty Sala - podobiekty klasy Szkola
	vector<Sala>sala;
	///Podklasa klasy Szkola
	Sekretariat sekretariat;
protected:
	///zmienna przechowujaca liczbe uczniow szkoly
	int liczbaUczniow;
	///zmienna przechowujaca liczbe sal w szkole
	int liczbaSal;
public:
	///Konstruktor domyslny 
	Szkola();
	///Destruktor
	~Szkola();
	///Funkcja umozliwiajaca zapisywanie stanu obiektu do pliku
	void zapiszStan(Szkola&szkola, ostream& os);
	///Funkcja umozliwiajaca udczytywanie stanu obiektu z pliku
	void wczytajStan(Szkola&szkola,istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
	/**Funkcja umozliwiajaca stworzenie sal w szkole
	\param ileSal okresla ile sal ma powstac
	\return funkcja nic nie zwraca
	*/
	void stworzSale(int ileSal);
	///Funkcja umozliwiajaca dodanie sali do szkoly
	void dodajSale(Sala &salaLekcyjna);
	/**Funkcja zmieniajaca parametry sekretariatu 
	wykorzystywana do sprawdzenia poprawnosci zapisu/odczytu z pliku
	\param ileSekretarek okresla nowa liczbe sekretarek, podawana przez uzytkownika
	*/
	void pozmieniajParametrySekretariatu(int ileSekretarek);
	
	/// Operator strumieniowy <<
	friend ostream& operator <<(ostream &s, Szkola &szkola);
	/// Operator strumieniowy >>
	friend istream& operator >>(istream &s, Szkola &szkola);
	
};

