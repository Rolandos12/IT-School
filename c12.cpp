// c12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C12- Structuri

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <vector>

using namespace std;

// declarati o structura pentru a stoca informatiile despre un angajat. scrieti un program care sa sorteze angajatii dupa nume in ordine descrescatoare

//typedef struct angajat
//{
//	string nume;
//	string prenume;
//	int varsta;
//	void afiseza() const
//	{
//		cout << end << "nume: " << nume << "prenume: " << prenume << "varsta: " << varsta;
//	}
//
//};
//
//bool comparare(const angajat& a, const angajat& b)
//{
//	return nume.a> nume.b;
//}
//
//int main()
//{
//	int nr_angajati;
//
//	cout << "cati angajati aveti?";
//	cin >> angajati;
//	vector<angajat> angajati(nr_angajati);
//	int i;
//	for (int i = 0, i < angajati; ++i)
//	{
//		cout << "dati detaliile angajatului" << i << ":" << endl;
//		cout << "nume: ";
//		cin >> nume;
//		cout << endl;
//
//		cout << "prenume: ";
//		cin >> prenume;
//		cout << endl;
//
//		cout << "varsta: ";
//		cin >> nume;
//		cout << endl;
//		angajati[i].nume = nume;
//		angajati[i].prenume = prenume;
//		angajati[i].varsta = varsta;
//
//	}
//	angajati[i].nume = { "popescu", "ion", 22 };
//	angajati[++i].nume = { "ionescu", "ion", 44 };
//	sort(angajati.begin(), angajati.end(), comparare);
//	cout << endl;
//
//	for (const auto& el : angajati)
//	{
//		el.afiseaza();
//	}
//}


// declarati o structura pentru a stoca informatiile despre un produs intr-un magazin. introduceti de la tastatura numarul de produse si cititi informatiile pentru produse. folositi un pointer spre un array


//struct produs
//{
//	int greutate;
//	string denumire;
//	float pret;
//	
//	void afisare()
//	{
//		cout << greutate<< " " << denumire <<" " << pret << endl;
//	}
//
//};
//
//
//int main()
//{
//	produs* produse = new produs[5];
//	produse[0] = { 20, "laptop", 999.99 };
//	produse[1] = { 10, "camera", 96.19 };
//	produse[2] = { 30, "telefon", 85.59 };
//	produse[3] = { 5, "ceas", 69.69 };
//	produse[4] = { 7, "ochelari", 12.35 };
//	
//	for (int i=0; i<5; i++)
//	{
//		produse[i].afisare();
//	}
//
//}

//scrieti un program care tine evidenta notelor unor elevi.
//cerinte: -sa folositi structuri imbricate(struct nota sa fie definita in struct elev)
//-ambele structuri sa aiba o functie de afisare
//-elevii sa fie memorati intr-un container de tipul set




//struct elev
//{
//	string nume_prenume;
//	string numar_matricol;
//	int clasa;
//
//	struct nota
//	{
//		string materie;
//		float valoare;
//		void afisare() const
//		{
//			cout << endl;
//
//			cout << "materie: " << materie << " " << "nota: " << nota << endl;
//		}
//	};
//	nota note[5];
//
//	void afisare() const
//	{
//		cout << nume_prenume << " " << numar_matricol << " " << clasa << " ";
//		for (int i = 0; i < 5; ++i)
//		{
//			nota[i]. afisare();
//		}
//	}
//	bool operator<(const elev& e) const
//	{
//		return nume_prenume < e.nume_prenume;
//	}
//
//	/*float media_notelor() const
//	{
//		int suma = 0;
//		for (int i = 0; i < 5; ++i)
//		{
//			suma += note[i].valoare;
//
//		}
//		return static_cast<float>(suma) / 5;
//	}*/
//};
//
//
//
//int main()
//{
//	set<elev> e;
//	elev e1 =
//
//		e.insert({ "popescu ion", "nr123", 5, {{"mate", 10} ,{"romana", 4},{"engleza", 5}, {"sport", 9}, { "religie",6 }} });
//	e.insert({ "radu pop", "nr233", 7, {{"mate", 7} ,{"romana", 8},{"engleza", 6}, {"sport", 10}, { "religie",7 }} });
//
//	e.insert({ "vasile ion", "nr417", 10, {{"mate", 5} ,{"romana", 7},{"engleza", 8}, {"sport", 7}, { "religie", 10 }} });
//	for (const auto& el : e)
//	{
//		el.afisare();
//		/*cout << "media elevului este: " << el.media() << endl;*/
//	}
//	
//}

