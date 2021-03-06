#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "BudynekEdukacyjny.h"
#include "Ponadgimnazjalna.h"
#include "Szkola.h"
#include "Uczelnia.h"
#include "Sala.h"

using namespace std;

int opcja;

int main() {
	
	Ponadgimnazjalna ponadgimnazjalna;
	ponadgimnazjalna.stworzSale(3);
	Uczelnia uczelnia;
	uczelnia.stworzAule(2);
	Szkola szkola;
	szkola.stworzSale(1);
	int wybranyObiekt = 1;
	
	do {
		switch (opcja) {
		case 0:
			cout <<endl<< "Opcje do wyboru:" << endl << endl;
			cout << "1 - Wyswietl stan obiektu" << endl;
			cout << "2 - Zmiana obiektu" << endl;
			cout << "3 - Zmiana liczby studentow/uczniow/maturzystow" << endl;
			cout << "4 - Zmiana parametrow sekretariatu/dziekanatu" << endl;
			cout << "5 - Zapisz stan obiektu do pliku" << endl;
			cout << "6 - Odczytaj stan obiektu z pliku" << endl;
			cout << "7 - Dodaj sale/aule" << endl;
			cout << "8 - test - polimorfizm" << endl;
			cout << "9 - test - zastosowanie metod wirtualnych na wektorach obiektow" << endl;
			cout << "10 - Zakoncz" << endl << endl;
			cout << "Wybieram opcje: ";
			cin >> opcja;
			break;
		case 1:
		{
			system("cls");
			if (wybranyObiekt == 1) {
				ponadgimnazjalna.wyswietlStan();
			}
			else {
				uczelnia.wyswietlStan();
			}
			opcja = 0;
			break;
		}
		case 2:
			system("cls");
			cout << "Wybierz obiekt:" << endl << "1 - Szkola ponadgimnazjalna" << endl << "2 - uczelnia wyzsza" << endl;
			cin >> wybranyObiekt;

			opcja = 0;
			break;
		case 3:
		{
			system("cls");
			cout << "Podaj nowa liczbe osob: " << endl;
			int nowaLiczba;
			cin >> nowaLiczba;
			if (wybranyObiekt == 1) {
				ponadgimnazjalna.zmienLiczbeOsob(nowaLiczba);
			}
			else {
				uczelnia.zmienLiczbeOsob(nowaLiczba);
			}
			opcja = 0;
			break;
		}
		case 4:
		{
			system("cls");
			
			cout << "Podaj, ile sekretarek ma byc w sekratariacie/dziekanacie:" << endl;
			int liczbaPan;
			cin >> liczbaPan;
			if (wybranyObiekt == 1) {
				ponadgimnazjalna.pozmieniajParametrySekretariatu(liczbaPan);
			}
			else {
				uczelnia.pozmieniajParametryDziekanatu(liczbaPan);
			}
			opcja = 0;
			break;
		}
		case 5:
		{
			system("cls");
			
			if (wybranyObiekt == 1) {
				ofstream plikZapis("ponadgimnazjalna.txt");
				ponadgimnazjalna.zapiszStan(ponadgimnazjalna, plikZapis);
				plikZapis.close();
			}
			else {
				ofstream plikZapis("uczelnia.txt");
				uczelnia.zapiszStan(uczelnia, plikZapis);
				plikZapis.close();
			}
			

			opcja = 0;
			break;
		}
		case 6:
		{
			system("cls");
			
			if (wybranyObiekt == 1) {
				ifstream plikOdczyt("ponadgimnazjalna.txt");
				ponadgimnazjalna.wczytajStan(ponadgimnazjalna, plikOdczyt);
				plikOdczyt.close();
			}
			else {
				ifstream plikOdczyt("uczelnia.txt");
				uczelnia.wczytajStan(uczelnia, plikOdczyt);
				plikOdczyt.close();
			}
			

			opcja = 0;
			break;
		}
		case 7:
		{
			system("cls");
			if (wybranyObiekt == 1) {
				Sala salaDodatkowa;
				ponadgimnazjalna.dodajSale(salaDodatkowa);
			}
			else {
				Aula aulaDodatkowa;
				uczelnia.dodajAule(aulaDodatkowa);
			}
			opcja = 0;
			break;
		}
		case 8:
			system("cls");
			cout << "testowanie-polimorfizm" << endl;
			
			BudynekEdukacyjny *budynki[3];
			budynki[0] = &ponadgimnazjalna;
			budynki[1] = &szkola;
			budynki[2] = &uczelnia;
			cout << "**********************" << endl;
			for (int i = 0; i < 3; i++) {
				budynki[i]->wyswietlStan();
				cout << "**********************" << endl;
			}
			
			

			opcja = 0;
			break;
		case 9: {
			system("cls");
			cout << "zastosowanie metod wirtualnych na wektorach obiektow" << endl;
			vector<BudynekEdukacyjny*>budynki2;
			budynki2.push_back(&ponadgimnazjalna);
			budynki2.push_back(&szkola);
			budynki2.push_back(&uczelnia);
			cout << "**********************" << endl;
			for (int i = 0; i < 3; i++) {
				budynki2[i]->wyswietlStan();
				cout << "**********************" << endl;
			}

			opcja = 0;
			break;
		}
		case 10:
			system("cls");

			opcja = 0;
			break;	
		default:
			system("cls");
			cout << "nie ma takiej opcji !" << endl;
			opcja = 0;
		} 

	} while (opcja !=10);
} 