// curs 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

// sa se afiseze ultima cifra a numarului pe o linie noua

/*void func(int x)
{
    while (x > 0)
    {
        cout << x % 10 << endl;  // afisam ultima cifra
        x /= 10;

   }
}

int main()
{
    int nr;
    cin >> nr;
    func(432);
   
}
*/

// sa se afiseze inversul unui nr

/* void invers(int x)
{  
    int nr_invers = 0;
    while (x > 0)
    {
        int ultima_cifra = x % 10;
        nr_invers = nr_invers * 10 + ultima_cifra;
        x /= 10;


    }
    cout << nr_invers;
}

int main()
{
    int nr;
    cin >> nr;
    invers(nr);

}
*/
// scrieti un program care afiseaza al n-lea nr din sirul lui fibbonaci

/* int fibo()
{
    int n;
    cin >> n;
    int nr_1 = 0;
    int nr_2 = 1;
    if (n ==1)
        return nr_1;
    if (n == 2)
        return nr_2;
    int i = 3;
    int nr_3;
    while (i <= n)
    {
        int nr_3 = nr_1 + nr_2;
        nr_1 = nr_2;
        nr_2 = nr_3;
        ++i;
        
    }
  
    return nr_3;
}
int main()
{
    int nr;
    //cin >> nr;
   cout<< fibo();

}
*/

// scrie un program care citeste si verifica un nr daca este  de tip armstrong

/* int putere(int baza, int exponent)
{
    int produs = 1;
    while (exponent > 0)
    {
        produs *= baza;
        --exponent;
    }
    return produs;
}

int nr_cifre(int n)
{
    int k = 0;
    while (n > 0)
    {
        n = n / 10;
        ++k;
            }
    return k;
}

bool armstrong(int n)
{
    int cifre = nr_cifre(n);
    int suma = 0;
    int copy_n = n;
    while (n > 0)
    {
        suma = suma + putere(n % 10, cifre);
        n /= 10;

    }
    if (suma == copy_n)
        return true;
    else
        return false;

}
int main()
{
    int nr;
    cin >> nr;
    cout << armstrong(nr);


}
*/

// exercitii 'do while' - un prog care afiseaza daca sunt numere pare sau impare pana cand introduce un nr multiplu de zece

/* int main()
{

    int nr;
  
    do {
        cin >> nr;
        if (nr % 2 == 0)
            cout << "nr este  par";
        else {
            cout << "nr este impar";
        }
    } while (nr % 10 != 0);
      
}
*/

// un prog care calculeaza media aritmetica a nr si sa se termine cand se introduce val 0

/* int main()
{
    int media, a, b, c;

    do {
        cin >> a >> b >> c;
      
        media = (a + b + c) / 2;
        cout << "media este: " << media;
    } while (a != 0 || b != 0 || c != 0);
    
     }
     */

// scrie un prog care citeste un nr intreg si determina cate cifre are acesta cu do while

/* int numar_cif(int n)
{
    int k = 0;
    do {
        n = n / 10;
        ++k;

    } while (n > 0);
        return k;
}

    int main()
    {
        int nr;
        cin >> nr;
        cout << "nr de cifre este : " << numar_cif(nr) << endl;

    }
    */

