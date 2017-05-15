#include "Sekretariat.h"
#include <string>


using namespace std;

Sekretariat::Sekretariat()
{
	ilePomieszczen = 2;
	czyDyrektorTuJest = false;
	liczbaSekretarek = 1;
}


Sekretariat::~Sekretariat()
{
}

void Sekretariat::wyswietlZawartosc()
{
	cout << "Sekretariat sklada sie z " << ilePomieszczen << " pomieszczen" << endl;
	cout << "Liczba sekretarek: " << liczbaSekretarek << endl;
	if (czyDyrektorTuJest == true) {
		cout << "Dyrektor jest, ale zajety, nie mozna mu przeszkadzac" << endl;
	}
	else {
		cout << "Niestety dyrektora nie ma " << endl;
	}
}

void Sekretariat::dodatkowePomieszczenieDlaVice()
{
	if (ilePomieszczen == 3) {
		cout << "Nie mozna dodac pomieszczenia, gabinet dla vice dyrektora juz istnieje" << endl;
	}
	else {
		ilePomieszczen = 3;
	}
}

void Sekretariat::zmienLiczbeSekretarek(int liczbaSekretarek)
{
	this->liczbaSekretarek = liczbaSekretarek;
}

void Sekretariat::dyrektorJest()
{
	czyDyrektorTuJest = true;
}

ostream & operator<<(ostream & s, Sekretariat & sekret)
{
	s << sekret.ilePomieszczen << endl << sekret.liczbaSekretarek << endl << sekret.czyDyrektorTuJest;
	return s;
}

istream & operator >> (istream & s, Sekretariat & sekret)
{
	s >> sekret.ilePomieszczen >> sekret.liczbaSekretarek >> sekret.czyDyrektorTuJest;
	return s;
}
