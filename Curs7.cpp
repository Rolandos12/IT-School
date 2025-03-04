// Curs7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

 // curs 7 exercitii cu while si do while
 // exercitii din tema, ex 5

/*
bool este_prim(int nr)   //functie daca este nr prim
{
	int i = 2;
	if (nr == 0)
		return false;
	while (i <= nr / 2)
	{
		if (nr % i == 0)
			return false;
		++i;

	}
	return true;

}



int main()
{
	int n;
	do
	{
		cin >> n;
		if (este_prim(n))
		{
			cout << "Numarul " << n << " este prim\n";
		}
		else cout << " numarul " << n << " nu este prim \n";

	} while (n > 0);

}
*/

//   scrie un program care calculeaza a^b folosind sccesiuni multiple
/*
int putere(int baza, int exponent)
{
	int i = 0;
	int produs = 1;

	  do
	  {
		  if (exponent == 0)
			  return produs;
		  produs = produs * baza;
		  ++i;

	  } while (i <= exponent);
		  return produs;
}

int main()
{
	int baza, exponent;
	cin >> baza;
	cin >> exponent;
	putere(baza, exponent);
	cout << " rezultat = " << putere(baza, exponent);
}
*/
// scrie un algoritm care calculeaza produsul a n nr citite de la tastatura


/* int main()
{
	int n, nr, i;
	i = 1;
	cin >> n;
	int produs = 1;

	do {
		cin >> nr; 
		produs = produs * nr;
		++i;
	} while (i <= n);
	cout << "Produsul = " << produs;
}
*/

// excercitii cu FOR

// sa se faca o functie care ne spune cate nr pare sunt in interval

 /* int main()
{
	int a, b;
	cin >> a >> b;
	int suma = 0;
	for (int i = a; i <= b; ++i)
	{
		if (i % 2 == 0)
			++suma;

	}
	cout << "avem " << suma << " numere pare in interval";
} */

  // realizati un program care sa asfiseze toate nr perfecte mai mici decat n. un nr

 /*bool este_perfect(int nr)
  {
	  int suma_div = 0;
		  for (int i = 1; i <= nr / 2; ++i)
		  {
			  if (nr % i == 0)
			  {
				  suma_div = suma_div + i;
			  }
		  }
	  if (nr == suma_div)
		  return true;
	  return false;

  }

  int main()
  {
	  int nr;
	  cin >> nr;
	  for (int i = 1; i <= nr; ++i)
	  {
		  if (este_perfect(i))
			  cout << " numarul " << i << "este perfect" << endl;
		  else
			  cout << "numarul " << i << " nu este perfect" << endl;
	  }
  } 
  */

// scrie un program care citeste un sire de caracatere si un carcater de la utilizator si sa determine de cate ori apare acel caracter in sir

/*int main()
{
	char c = 'p';
	string s{ "mississippi" };
	int k = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == c)
			++k;
	}
	cout << "Caracterul " << c << " apare de " << k << " ori in sirul " << s << endl;

}
*/
// exercitii cu Array
// declarati un array de 10 elemente si calculati suma tuturor elementelor

/*int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int suma = 0;
	for (int i = 0; i < 10; ++i)
	{
		suma = suma + x[i];
	}
	cout << suma;
}
*/
// citesc declarati 2 array-uri de 10 elemente si copiati elementele in primul array in al doilea

void afisare(int x[], int n)
{
	for (int i=0; i<n; ++i)
	{
		cout << x[i]<< " ";
	}
}

int main()
{
	int n=6;
	int x[100];
	cout << "Dati numerele";
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];

	}
	afisare(x, n);
	int y[100];
	for (int i = 0; i < n; ++i)
	{
		y[i] = x[i];
	}
	cout << endl;
	afisare(y, n);
}