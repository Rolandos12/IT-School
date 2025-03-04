// C16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>
#include <vector>
#include <math.h>
using namespace std;
// Programarea orientata pe obiecte

//class Copac
//{ private:
//    float inaltime;
//    int numar_crengute;
//    bool fructifer;
//public:
//    Copac(float h, bool f) : inaltime(h), fructifer(f)
//    {
//        inaltime = 2;
//        numar_crengute = inaltime * 10;
//        fructifer = fructifer;
//    }
// 
//    void setFructifer(bool f)
//    {
//        fructifer = f;
//    }
//    bool getFructifer() const
//    {
//        fructifer = false;
//        inaltime = 20;
//        return fructifer;
//    }
//     void afiseaza_atribute()
//    {
//        cout << "inaltime: " << inaltime << " numar_crengute: " << numar_crengute << "fructifer? " << fructifer << endl;
//    }
//
//};
//
//int main()
//{
//    Copac c1;
//    c1.afiseaza_atribute();
//    c1.setValue(true);
//    Cout << "fructifer???" << c1.getFructifer() << endl;
//    c1.afiseaza_atribute();
//}

//exercitiul 1 ceas
// creeaza o clasa clock cu atribute publice hours, minutes, seconds,
// adauga o metoda pt a seta timpul
// adauga o metoda publica set_display pentru a adauga

//class Clock
//{
//public:
//	int h, m, s;
//	Clock(int h, int m, int s) : h(h), m(m), s(s) {}
//	void setTime()
//	{
//		this->h = h;
//		this->m = m;
//		this->s = s;
//
//	}
//	void displayTime()
//	{
//		cout << h << ":" << m << ":" << s << endl;
//
//	}
//	string getTime() const
//	{
//		return std::to_string(h) + ":" + std::to_string(m) + ":" + std::to_string(s);
//
//	}
//	void tick()
//	{
//		if (s == 59)
//		{
//			s = 0;
//			if (m == 59)
//			{
//				m = 0;
//				if (h == 23)
//				{
//					h = 0;
//				}
//				else
//				{
//					h++;
//				}
//			}
//			else
//			{
//				m++;
//			}
//		}
//		else
//		{
//			s++;
//		}
//	}
//
//};
//
//int main()
//{
//	Clock c(12, 59, 59);
//	cout << c.getTime() << endl;
//	c.tick();
//	c.displayTime();
//
//	Clock* c1 = new Clock(11, 33, 59);
//	cout << c1->getTime()<< endl;
//	delete c1;
//
//	vector<Clock> my_clocks;
//	my_clocks.push_back(c);
//	my_clocks.at(0).displayTime();
//
//}

// exercitiul 2 punct in plan
//creaza o clasa point care reprezinta un punct in planul bidimensional cu atribute publice x si y;
// adauga o metodat display pt a afisa coordonatele
// agauga o metoda pt a calcula distantele euclidiana dintre 2 pct
class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;

	}
	void display() const
	{
		cout << "x= " << x << " y= " << y << endl;
	}
	void setX(float x)
	{
		this->x = x;

	}
	float getX() const
	{
		return this->x;
	}
	float dist(Point p)
	{
		float dist = sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
		return dist;
	}
private:
	float x, y;


};

int main()
{
	Point p1(10, 10);
	Point p2(10, 5);
	p1.display();
	p1.setX(99);
	p1.display();
	cout << "distanta= " << p1.dist(p2);
}