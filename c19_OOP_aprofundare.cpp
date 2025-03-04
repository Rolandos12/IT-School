// c19_OOP_aprofundare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;


//Funcții Virtuale: Definiți clasa Shape cu metoda virtuală draw(). Derivați clasele Circle și Rectangle și suprascrieți draw().
//Clase Abstracte și Funcții Virtuale Pure : Avem o clasă abstractă AbstractBase cu o funcție virtuală pură pureFunction().Clasa derivată Concrete implementează această funcție.
//Interfețe : Definiți o interfață Printable cu metoda virtuală pură print().Derivați clasele Document și Image care implementează metoda print().

 //ex 1
//class Shape
//{
//	public:
//		Shape() = default;
//	virtual	void draw()
//
//		{
//			cout << "draw from shape\n";
//		}
//};
//
//
//class Circle : public Shape
//{
//public: 
//	Circle() = default;
//	void draw()
//	{
//		cout << "draw from circle\n";
//	}
//
//};
//
//class Rectangle : public Shape
//{
//public:
//	Rectangle() = default;
//	void draw()
//	{
//		cout << "draw from rectangle\n";
//	}
//};
//
//
//
//
//int main()
//{
//	Shape* s = new Rectangle;
//	s->draw();
//	delete s;
//
//	Circle c;
//	s = &c;
//	s->draw();
//}


//Clase Abstracte și Funcții Virtuale Pure : Avem o clasă abstractă AbstractBase cu o funcție virtuală pură pureFunction().Clasa derivată Concrete implementează această funcție.
//ex 2

//class Shape
//{
//	public:
//		Shape() = default;
//		virtual	void draw() = 0;  trebuia doar creata o interfata virtuala aici fata de ex precedent
//
//};
//
//
//class Circle : public Shape
//{
//public: 
//	Circle() = default;
//	void draw()
//	{
//		cout << "draw from circle\n";
//	}
//
//};
//
//class Rectangle : public Shape
//{
//public:
//	Rectangle() = default;
//	void draw()
//	{
//		cout << "draw from rectangle\n";
//	}
//};
//
//
//
//
//int main()
//{
//	//Shape s;
//	Circle c;
//	Shape* s = &c;
//	s->draw();
//}

//Interfețe : Definiți o interfață Printable cu metoda virtuală pură print().Derivați clasele Document și Image care implementează metoda print().
// ex3

//class Printable {
//public:
//	virtual void print() = 0;
//	virtual void printSize() = 0;
//};
//class Document : public Printable
//{
//public:
//	void print() {
//		cout << "Print from Document\n";
//	}
//	void printSize() {}
//};
//class Image : public Printable
//{
//public:
//	virtual void print() {
//		cout << "Print from Image\n";
//	}
//	void printSize() {
//		cout << "Print Size from Image\n";
//	}
//};
//class PNG : public Image
//{
//public:
//	void print() {
//		cout << "Print from PNG" << endl;
//	}
//};
//int main()
//{
//	Printable* p = new PNG;
//	p->print();
//	p->printSize();
//}

//class C
//{
//	friend void afisare(C obj);
//public:
//	C()
//	{
//		x = 666;
//	}
//private:
//	int x;
//	
//	void printX()
//	{
//		cout << "x= " << x << endl;
//	}
//};
//void afisare(C obj)
//{
//	obj.printX();
//}
//int main()
//{
//	C x;
//	afisare(x);
//}

// ex:
// Creează o clasă Engine care conține informații despre motorul unei mașini. 
// Creează o clasă Wheel care conține informații despre roțile unei mașini. 
// Creează o clasă Car care are un obiect de tip Engine și un vector cu 4 obiecte de tip  Wheel. 
// Scrie o funcție care să afișeze toate detaliile despre o mașină.
//Cerințe:
//Engine trebuie să aibă membrii privați horsepower și type.
//Wheel trebuie să aibă membrii privați size.
//Car trebuie să moștenească Engine și Wheels.
//Creează o metoda printCarDetails care să afișeze toate detaliile despre mașină.

//class Motor
//{
//public:
//	Motor() = default;
//	Motor(int cp, string t)
//	{
//		this->CP = cp;
//		this->tip = t;
//	}
//	~Motor() = default;
//	void print() const
//	{
//		cout << "motorul are " << CP << "si este de tipul: " << tip << endl;
//	}
//private:
//	int CP;
//	string tip;
//};
//
//class Roata
//{
//public:
//	Roata() = delete;
//	~Roata() 
//	{
//		//if(dim)
//		delete dim;
//	}
//
//	 Roata(string t, int* d)
//	{
//		tip = t;
//		dim = d;
//	}
//	 Roata(const Roata& other) {
//		 tip = other.tip;
//		 dim = new int(*other.dim);
//	 }
//	void print() const
//	{
//		cout << "Roata este pe " << *dim << "inch si este de tipul: " << tip << endl;
//	}
//private:
//	string tip;
//	int *dim;
//
//};
//
//class Masina
//{
//public:
//	Masina() = delete;
//	~Masina() = default;
//	Masina(Motor& m, vector<Roata>& r)
//	{
//		this->m = m;
//		this->roti = r;
//	}
//	Masina(int motor_size, string motor_type, int roata_size, string roata_type)
//	{
//		Motor temp(motor_size, motor_type);
//			m = temp;
//			roti.reserve(4);
//			Roata rtemp(roata_type, new int(roata_size));
//			roti.push_back(rtemp);
//			roti.push_back(rtemp);
//			roti.push_back(rtemp);
//			roti.push_back(rtemp);
//
//	}
//	void printCarDetails() const
//	{
//		cout << "detaliile masinii sunt: \n";
//		m.print();
//		for (const auto& el : roti)
//		{
//			el.print();
//		}
//	}
//private:
//	Motor m;
//	vector<Roata> roti;
//
//};
//
//int main()
//{
//	Masina m(6000, "V12", 19, "vara");
//	m.printCarDetails();
//}