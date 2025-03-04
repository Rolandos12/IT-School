// curs 17 aprofundare OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <math.h>
#include <fstream>



using namespace std;


// TIPURI DE CONSTRUCTORI

//class Point
//{
//public:
//
//	// c-tor default
//	Point()
//	{
//		std::cout << "Constructor default params" << endl;
//		this->x = x;
//		this->y = y;
//	}
//
//	// c-tor parametrizat
//	Point(int x, int y)
//	{
//		std::cout << "Constructor" << endl;
//		this->x = x;
//		this->y = y;
//	}
//
//	// copy constructor
//	Point(const Point& p)
//	{
//		cout << "Copy constructor" << endl;
//		this->x = p.x;
//		this->y = p.y;
//	}
//	void display() const
//	{
//		cout << "x = " << x << endl;
//		cout << "y = " << y << endl;
//	}
//	~Point()
//	{
//		cout << "destructor" << endl;
//	}
//
//private:
//	int x, y;
//};
//
//int main()
//{
//	Point p1(3, 5), p2(p1), p3;
//	p1.display();
//	p2.~Point();
//	p1.display();
//
//}
//


//EXERCITII:
// DynamicArray
//Creează o clasă DynamicArray care gestionează un array dinamic de întregi.
//  Implementează un constructor implicit, un constructor parametrizat și un destructor care eliberează memoria alocată pentru array. 
// Adaugă metode pentru a obține și seta valorile din array.

//class DynamicArray
//{
//public:
//	DynamicArray()
//	{
//		size = 10;
//		data = new int(size);
//
//	}
//	DynamicArray(int s) : size(s), data(new int(size))
//	{
//		
//	}
//	~DynamicArray()
//	{
//		
//		cout << "Data was destroyed" << endl;
//		delete[] data;
//		//data = nullptr;
//	}
//	void setValue(int x, int index)
//	{
//		if (index >= 0 && index < size)
//		{
//			this->data[index] = x;
//		}
//		else
//			cout << "Error while setting the value"<<endl;
//
//	}
//	int getValue(int index) const
//	{
//		if(index>=0 && index< size)
//		return data[index];
//
//	}
//	void display() const
//	{
//		for (int i = 0; i < size; i++)
//			cout << data[i] << " ";
//		cout << endl;
//	}
//private:
//	int* data;
//	int size;
//
//};
//
//int main()
//{
//	DynamicArray arr{5};
//	arr.setValue(0, 99);
//	arr.setValue(2, 11);
//	arr.display();
//
//}

// // FileHandler
//Creează o clasă FileHandler care gestionează fișierele deschise pentru scriere.
// Implementează un constructor care primește numele fișierului și îl deschide pentru scriere, și un destructor care închide fișierul.
// Adaugă o metodă pentru a scrie o linie în fișier.



class FileHandler
{
public:
	FileHandler(const string& name)
	{
		this->name = name;
		file.open(name);
		if (!file.is_open())
		{
			cout << "Error while opening the file" << endl;
		}
	}
	~FileHandler()
	{
		if (file.is_open())
		{
			file.close();
			cout << "File was closed" << endl;
		}
		else
		{
			cout << "File was not open" << endl;
		}
	}

	void writeLine(string line)
	{
		if (file.is_open())
		{
			file << line << endl;
		}
	}
private:
	string name;
	ofstream file;
};
int main()
{
	FileHandler f("oop.txt");
	f.writeLine("OOP is fun");
}

//enum class Mode {
//input,
//output
//};
//
//class FileHandler
//{
//public:
//	FileHandler(const string& name, Mode m)
//	{
//		this->name = name;
//		switch (m)
//		{
//		case Mode::input:
//			file.open(name, std::ios::in);
//			break;
//		case Mode::output:
//			file.open(name, std::ios::out);
//			break;
//
//		}
//
//		if (!file.is_open())
//		{
//			cout << "Error while opening the file" << endl;
//		}
//	}`