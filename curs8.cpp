// curs8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

//int main()  // scrieti un program care numara cate elemente negative si pozitive sunt intr-un array
//{
//    int x[] = { 3,4,8,-10,-34,0,32 };
//    int n = sizeof(x) / sizeof(int);
//    int k_neg = 0, k_poz = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        if (x[i] < 0)
//            k_neg++;
//        else if (x[i] > 0)
//            k_poz++;
//            }
//    cout << "in array avem " << k_neg << " elemente negative \n";
//    cout << "in array avem " << k_poz << " elemente pozitive \n";
//}


// scrie o functie care roteste (shifteaza) elementele unui array de la dreapta cu o pozitie

void afisare(int v[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
//
//void roteste(int v[], int n)
//{
//	int ultim = v[n - 1];
//	for (int i = n-1; i > 0; i--)
//	{
//		v[i] = v[i - 1];
//
//	}
//	v[0] = ultim;
//}
//
//
//int main()
//{
//
//
//	    int x[] = { 3, 4, 8, -10, -34, 0, 32 };
//	   int n = sizeof(x) / sizeof(int);
//	   afisare(x, n);
//	   roteste(x, n);
//	   afisare(x, n);
//
//}
// scrieti o functie care sterge elementele de la o pozitie specificata de utilizator

//void sterge(int v[], int n, int poz)
//{
//	
//	for (int i = poz; i < n-1; i++)
//	{
//		v[i] = v[i + 1];
//
//	}
//	v[n-1] = 0;
//}
//
//int main()
//{
//
//
//	    int x[] = { 3, 4, 8, -10, -34, 0, 32 };
//	   int n = sizeof(x) / sizeof(int);
//	   afisare(x, n);
//	   sterge(x, n,2);
//	   afisare(x, n);
//
//}

// scrie un program care verifica daca elementele unui array sunt ordonate crescator

//bool verifica_crescator_break(int v[], int n)
//{
//	bool este_cresc = true;
//	for (int i = 0; i < n; i++)
//	{
//		if (v[i] > v[i + 1])
//		{
//			este_cresc = false;
//			break;
//		}
//
//	}
//	return este_cresc;
//}
//
//
//
//
//int main()
//{
//
//
//	    int x[] = { 3, 4, 8, -10, -34, 0, 32 };
//		int y[] = { 1,4,6,9,101, 1000, 4000 };
//	   int n = sizeof(x) / sizeof(int);
//	   int m = sizeof(x) / sizeof(int);
//	   afisare(x, n);
//	   if (verifica_crescator_break(x, n))
//		   cout << "vectorul este cresc \n";
//	   else cout << "vectorul nu este cresc\n";
//	   afisare(y, m);
//	   if (verifica_crescator_break(y, m))
//		   cout << "vectorul este cresc\n";
//	   else cout << "vectorul nu este cresc\n";
//
//}


// scrie un program care calculeaza diferenta dintre o valoare maxima si minima dintr-un array


//int main() {
//    int n;
//
//    cout << "Introduceti numarul de elemente din array: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Numarul de elemente trebuie sa fie mai mare decat 0." << endl;
//        return 1;
//    }
//
//    int array[n];
//
//    cout << "Introduceti elementele array-ului: ";
//    for (int i = 0; i < n; ++i) {
//        cin >> array[i];
//    }
//
//    int max_val = array[0];
//    int min_val = array[0];
//
//    for (int i = 1; i < n; ++i) {
//        if (array[i] > max_val) {
//            max_val = array[i];
//        }
//        if (array[i] < min_val) {
//            min_val = array[i];
//        }
//    }
//
//    int diferenta = max_val - min_val;
//
//    cout << "Diferenta dintre valoarea maxima si minima este: " << diferenta << endl;
//
//    return 0;
//}

// scrie un program care verifica daca doua array-uri sunt egale

bool compara(int x[], int y[], int n, int m)
{
    if (n != m)
    {
        return false;
    }
    for (int i = 1; i < n; i++)
    {
        if(x[i]==y[i]
            {
                return false;
            }

    }
    return true;
}

int main()
{
    int x[] = { 3, 4, 8, -10, -34, 0, 32 };
    		int y[] = { 1,4,6,9,101, 1000, 4000 };
    	   int n = sizeof(x) / sizeof(int);
    	   int m = sizeof(x) / sizeof(int);
           if (compara(x, y, n, m))
           {
               cout << "array sunt egale" << endl;
           else
               cout << "array nu sunt egale" << endl;
           }
}