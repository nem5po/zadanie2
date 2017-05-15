#pragma once
#include "BudynekEdukacyjny.h"
#include "Aula.h"
#include "Dziekanat.h"
#include <vector>
///Klasa Uczelnia, dziedziczy po klasie BudynekEdukacyjny
class Uczelnia :
	public BudynekEdukacyjny
{
private:
	///wektor przechowujacy obiekty Aula - podobiekty do Uczelni
	vector<Aula>aule;
	/// podobiekt dziekanat
	Dziekanat dziekanat;
protected:
	///zmienna przechowujaca liczbe studentow
	int liczbaStudentow;
	///zmienna przechowujaca liczbe wydzialow tej uczelni
	int liczbaWydzialow;
public:
	///Konstruktor
	Uczelnia();
	///Destruktor
	~Uczelnia();
	///Funkcja umozliwiajaca zapisywanie stanu obiektu do pliku	
	void zapiszStan(Uczelnia& uczelnia,ostream& os);
	///Funkcja umozliwiajaca odczytywanie stanu obiektu z pliku
	void wczytajStan(Uczelnia& uczelnia,istream& is);
	void wyswietlStan();
	void zmienLiczbeOsob(int nowaLiczbaOsob);
	///Funkcja zmieniajaca parametry podobiektu Dziekanat
	///wykorzystywana do sprawdzenia poprawnosci zapisu/odczytu z pliku
	void pozmieniajParametryDziekanatu();
	/**Funkcja umozliwiajaca stworzenie auli w uczelni
	\param ileAuli okresla ile podobiektow ma powstac
	\return funkcja nic ni zwraca
	*/
	void stworzAule(int ileAuli);
	///Funkcja umozliwiajaca dodanie auli do uczelni
	void dodajAule(Aula &aulaWykladowa);
	///operator strumieniowy <<
	friend ostream& operator <<(ostream &s, Uczelnia &uczelnia);
	///operator strumieniowy >>
	friend istream& operator >> (istream &s, Uczelnia &uczelnia);
};

