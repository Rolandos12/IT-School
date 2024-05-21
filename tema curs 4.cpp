// tema curs 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// scrie un program care primeste un caracter si verifica daca acesta este o vocala sau o consoana
/*int main()
{

    char caracter;

    cout << "Introduceti un litera: ";
    cin >> caracter;


    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
    {
        cout << "litera " << caracter << " este o vocala" << endl;
    }
    else if ((caracter >= 'a' && caracter <= 'z'))
    {
        cout << "litera " << caracter << " este o consoana" << endl;
    }
    else {
        cout << "carcaterul introdus " << caracter << " nu este o litera" << endl;
    }

    return 0;
  } */ 

  // scrie un program care primeste o luna (1-12) si sa afiseze anotimpul corespunzator


int main()
{
    int luna;

    cout << "Introduceti o luna (1-12): ";
    cin >> luna;

    if (luna == 12 || luna == 1 || luna == 2) {
        cout << "Anotimpul este: Iarna" << endl;
    }
    else if (luna >= 3 && luna <= 5) {
        cout << "Anotimpul este: Primavara" << endl;
    }
    else if (luna >= 6 && luna <= 8) {
        cout << "Anotimpul este: Vara" << endl;
    }
    else if (luna >= 9 && luna <= 11) {
        cout << "Anotimpul este: Toamna" << endl;
    }
    else {
        cout << "Luna introdusa nu este in calendar. Alegeti o luna intre 1 si 12" << endl;
    }

    return 0;
}