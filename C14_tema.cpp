// C14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <set>
#include <fstream>
#include "produs.h"

using namespace std;

// tema 25.05 scrie un program care gestioneaza info despre produse folosind fisiere. prog trebuie sa citeasca info despre produse dintr-un fisier la inceputul executiei si sa scrie anumite info intr-un alt fisier la sfarsitul executiei
// fiecare produs are un nume, pret, cantitate. prog trebuie sa permita urmatoarele operatiuni:
// citirea info despre produse dintr-un fisier de intrare numit produse.txt
// afisarea info despre produse cititie din fisier
// adaugaugare aunui produs in lista de produse
// stergerea unui produs din lista de produse dupa nume
// scrierea info actualizate despre produse intr-un fisier de iesire numit raport.txt. fisierul de iersire trebuie sa contina o lista cu toate produsele actualizate si totalul valoric al produselor (pret * cantitate )

bool citire_produse(vector<produs>& p)
{
	fstream f("produse.txt", ios::in);
		if (!f)
		{
			cout << "eroare la deschiderea fisierului" << endl;
			return false;
		}
	string denumire;
	int cant;
	float val;
	while (!f.eof())
	{
		cin >> denumire;
		cin >> cant;
		cin >> val;
		produs temp = { denumire, cant, val };
		p.push_back(temp);

	}
	f.close();

}
void afisare_produse(vector<produs>& p)
{
	cout << endl;
	for (const auto& el : p)
	{
		el.afisare();

	}

}

void adauga_produs(vector<produs>& p)
{
	cout << "dati detaliile produsului: " << endl;
	string denumire;
	int cant;
	float val;
	cout << " denumire : "; cin >> denumire; cout << endl;
	cout << "cantitate: "; cin >> cant; cout << endl;
	cout << "valoare: "; cin >> val; cout << endl;
	p.push_back({ denumire, cant, val });
	cout << "produsul a fost adaugat" << endl;
}

void sterge_produs(vector<produs>& p)
{
	string denumire;
	cout << " ce produs doriti sa stergeti? "; cin >> denumire; cout << endl;
	for (auto itr = p.begin(); itr != p.end(); ++itr)
	{
		if (itr->denumire == denumire)
		{
			itr= p.erase(itr);
		}
	}
}

void raport(vector<produs>& p)
	{
	fstream f("raport.txt", ios::out);
	if (!f)
	{
		cout << "eroare la deschiderea fisierului" << endl;
		return;
	}
		cout << endl;
		for (const auto& el : p)
		{
			el.afisare();

		}
		float suma = 0;
		for (const auto& el : p)
		{
			suma += el.cantitate * el.pret;
			f << el.afisare();
		}
		f << "valoarea totala a prodoselor este: " << suma << endl;

	}

int main()
{
	int optiune;
	
	cout << "dati optiunea: "; cin >> optiune;
	vector<produs> p;
	int sw = 0;
	while (optiune != 0 && sw==0)
	{
		cout << "dati optiunea: "; cin >> optiune;
		//cout << "1. Citire produse \n 2. Afisare produse \n 3. Adaugare produse \n 4. Stergere produse \n 5. Raport produse";
		
		switch (optiune)
		{
		case 0:
			cout << "\nMagazinul se inchide";
			break;
		case 1:
			if (!citire_produse(p))
				sw = 1;
			//citire_produse()
			break;
		case 2:
			afisare_produse(p);
			// afisare produse
			break;
		case 3:
			adauga_produs(p);

			// adaugare produs
			break;
		case 4:
			sterge_produs(p);
			//stergerea produsului
			break;
		case 5:
			raport(p);
			// raport produse
			break;
		}
		cout << "Dati optiunea: "; cin >> optiune;
	}

}


