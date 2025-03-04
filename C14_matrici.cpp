// C14_matrici.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// ex 1: 
int main()
{
	int m[3][3];
	fstream f("input.txt", ios::in);
	if (!f)
	{
		cout << "Eroare la deschiderea fisierului" << endl;
		return false;
	}

	int el;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			f >> m[i][j];
		}
	}

	int s = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			s += m[i][j];
			cout << m[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "suma matricei este: " << s << endl;
}

