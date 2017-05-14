#include "Szkola.h"
#include <fstream>


using namespace std;
//vector<Sala>sala;
Szkola::Szkola()
{
	liczbaUczniow = 1200;
	liczbaSal = 0;
	//vector<Sala>sala; // (liczbaSal);
	//salaL.push_back(&sala);
	///////////////////////////////////////
	//for(int i=0;i<liczbaSal;i++)
	//sala.push_back(Sala());
	///////////////////////////
	//sala[0];
	
}


Szkola::~Szkola()
{
}



void Szkola::zapiszStan(Szkola&szkola, ostream& os)
{
	BudynekEdukacyjny::zapiszStan(szkola,os);
	//os << liczbaUczniow<<endl;
	os << szkola << endl;
	for(int i=0; i<szkola.sala.size();i++)
	os << szkola.sala[i];
	os << szkola.sekretariat;
}

void Szkola::wczytajStan(Szkola&szkola,istream & is)
{
	BudynekEdukacyjny::wczytajStan(szkola,is);
	is >> szkola;
	for (int i = 0; i<sala.size(); i++)
	is >> szkola.sala[i];
	is >> sekretariat;

}

void Szkola::wyswietlStan()
{
	cout << "Liczba uczniow: " << liczbaUczniow << endl<<"Liczba sal: "<<liczbaSal<<endl;
	for (int i = 0; i<sala.size(); i++)
	sala[i].wyswietlZawartosc();
	sekretariat.wyswietlZawartosc();
	//cout << sala;//.wyswietlZawartosc();
}

void Szkola::zmienLiczbeOsob(int nowaLiczbaOsob)
{
	liczbaUczniow = nowaLiczbaOsob;
	cout << "Ta szkola ma teraz " << liczbaUczniow << " uczniow." << endl;
}

/*void Szkola::stworzSale(Szkola & szkola, int ileSal)
{
	for (int i = 0; i < ileSal; i++) {
		szkola.sala.push_back(Sala());
		liczbaSal++;
	}
} */

void Szkola::stworzSale(int ileSal)
{
	for (int i = 0; i < ileSal; i++)
		sala.push_back(Sala());
	liczbaSal = sala.size();
}

void Szkola::dodajSale(Sala & salaLekcyjna)
{
	sala.push_back(salaLekcyjna);
	liczbaSal = sala.size();
}

void Szkola::pozmieniajParametrySekretariatu()
{
	sekretariat.dodatkowePomieszczenieDlaVice();
	sekretariat.zmienLiczbeSekretarek(3);
	sekretariat.dyrektorJest();
}



void Szkola::zapisz(Szkola & szkola)
{
	ofstream plik("budynki.txt");
	plik << szkola;
	plik.close();
}

/*Szkola Szkola::operator+(const Sala & salaLekcyjna)
{
	Szkola nowa(*this);
	liczbaSal++;
	nowa.sala.push_back(Sala());
	
	cout << nowa.sala.size() << endl;
	return nowa;
} */

ostream & operator<<(ostream & s, Szkola & szkola)
{
	s << szkola.liczbaUczniow<<endl<<szkola.liczbaSal;
	return s;
}

istream & operator >>(istream & s, Szkola & szkola)
{
	s >> szkola.liczbaUczniow>>szkola.liczbaSal;
	return s;
}
