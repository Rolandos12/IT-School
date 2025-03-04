// c18_Mostenirea OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <math.h>

using namespace std;


// C18 mostenire
// Moștenire Simplă: Definiți o clasă Animal cu metoda makeSound(). Derivați clasa Dog și suprascrieți makeSound().
//class Animal
//{
//public:
//	virtual void makeSound()
//	{
//		cout << "Animalul scoate sunetul" << endl;
//	}
//
//};
//
//class Dog : public Animal {
//
//public:
//	void makeSound()  override {
//		cout << "Ham Ham" << endl;
//}
//	
//};
//
//int main()
//{
//	Dog myDog;
//	myDog.makeSound();
//}



// Constructori și Destructori: Descriere: 
// Definiți clasele Base și Derived cu constructori și destructori care afișează mesaje. Observați ordinea apelurilor.

class Base
{
public:
	Base() 
	{
		cout << "const def" << endl;
	}
	Base(int x, string s)
	{
		this->x = x;
		this->s = s;
		cout << "Constructorul din base" << endl;
	}
private:
	int x;
	string s;

};

class Derived : public Base
{
public:
	Derived() = default;
	Derived(int z) : Base (11, "22"), z(z)
	{
		this->z = z;
		cout << "constructorul din derived" << endl;
	}
private: int z;
};

int main()
{
	Derived d(2);
}
