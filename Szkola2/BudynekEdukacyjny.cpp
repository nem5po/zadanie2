#include "BudynekEdukacyjny.h"



BudynekEdukacyjny::BudynekEdukacyjny()
{
	ileLatIstnieje = 123;
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
	
}

ostream & operator<<(ostream &s, BudynekEdukacyjny &budynek)
{
	s << budynek.ileLatIstnieje;
	return s;
}

istream & operator >> (istream &s, BudynekEdukacyjny &budynek)
{
	s >> budynek.ileLatIstnieje;
	return s;
}
