// curs 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

//int main()
//{
    // scrieti un program care sa determine daca o persoana e zombie in functie de miscare si culoare
 /*   string culoare, miscare;
    cout << "culoarea e ciudata?"<< endl;
    cin >> culoare; 
    cout << "miscarea e ciudata?"<<endl;
        cin >> miscare;
    if (culoare == "da" && miscare == "da")
    {
        cout << " persoana este zombie";
    }

    else {
        cout << "nu este zombie";

    }
       
} */

// sa se scrie un prog care verifica daca e consoana sau vocala cu functia switch

/*void func()
{
    char c;
    while (true)
    {

        cout << "dati un caracter" << endl;
        cin >> c;
        if (c >= 'a' && c <= 'z')
        {



            switch (c)
            {
            case 'a':
                cout << "vocala" << endl;
                break;
            case 'e':
                cout << "vocala" << endl;
                break;
            case 'i':
                cout << "vocala" << endl;
                break;
            case 'o':
                cout << "vocala" << endl;
                break;
            case 'u':
                cout << "vocala" << endl;
                break;
            default:
                cout << " consoana" << endl;
            }
        }
        else
            cout << " caracter invalid" << endl;
    }
}

int main()
{
    func();

} */

// scrie un program care primeste o luna din calendar si sa afiseze anotimpul ei

/* void luna()
{
    cout << " alege o luna:" << endl;
    cin >> luna;
    switch luna()
    {
    case 12:
    case 1:
    case 2:
        cout << " iarna" << endl;
        break;
    case 3:
    case 4:
    case 5:
        cout << "primavara" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << " vara" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << " toamna" << endl;
        break;
    default:
        cout << " luna nu exista";

    }
}

int main()
{
    luna();

}
*/

/*void ziua()
{
    cout << "alege ziua saptamanii: " << endl;
    cin >> ziua;

    switch (ziua)
    {
    case '1':
        cout << "ziua aleasa este luni" << endl;
        break;
    case '2':
        cout << "ziua aleasa este marti" << endl;
        break;
    case '3':
        cout << "ziua aleasa este miercuri" << endl;
        break;
    case '4':
        cout << "ziua aleasa este joi" << endl;
        break;
    case '5':
        cout << "ziua aleasa este vineri" << endl;
        break;
    case '6':
        cout << "ziua aleasa este sambata" << endl;
        break;
    case '7':
        cout << "ziua aleasa este duminica" << endl;
        break;
    default: 
        cout << "ziua aleasa nu corespunde saptmanii" << endl;
      }
}

int main()
{
    ziua();
} 
*/

/*void afisare_nr_switch(int n)
{
    int i = 0;
    // cat timp i mai mic sau egal ca n
    while (i <= n)
    {
        // testez daca nr este par, daca da il afisez
        switch (i % 2)
        {
        
            case 0:
                cout << i << "numarul este par" << endl;
                break;
        }
        ++i;
    }
}
*/

/* void afisare_nr_if(int n)
{
    int i = 0;
    while (i <= n)
    {
        if (i%2==0)
        {
            cout << i << "numarul este par" << endl;

        }
        ++i;
    }
}

int main()
{

    int numar;
    cin >> numar;
    afisare_nr_if(numar);
    return 0;

}
*/
int suma(int a)
{
int suma = 0;
int j = 1;

while (j <= a)
{
    suma = suma + j;  // suma +=j;
    j++;

}
return suma;
}

int main()
{

    int numar;
    cin >> numar;
    int s = suma(numar);
        cout << endl << s;
    suma(numar);
    return 0;

}