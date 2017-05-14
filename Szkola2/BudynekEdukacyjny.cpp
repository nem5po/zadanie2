#include "BudynekEdukacyjny.h"



BudynekEdukacyjny::BudynekEdukacyjny()
{
	numer = 1;
}


BudynekEdukacyjny::~BudynekEdukacyjny()
{
}

void BudynekEdukacyjny::zapiszStan(BudynekEdukacyjny& budynekEdukacyjny,ostream & os)
{
	os << budynekEdukacyjny << endl;
}

void BudynekEdukacyjny::wczytajStan(BudynekEdukacyjny& budynekEdukacyjny,istream & is)
{
	is >> budynekEdukacyjny;
	//cout << budynekEdukacyjny << endl;
}

ostream & operator<<(ostream &s, BudynekEdukacyjny &budynek)
{
	s << budynek.numer;
	return s;
}

istream & operator >> (istream &s, BudynekEdukacyjny &budynek)
{
	s >> budynek.numer;
	return s;
}
