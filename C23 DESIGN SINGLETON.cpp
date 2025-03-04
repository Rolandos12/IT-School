// C23 DESIGN SINGLETON.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

using namespace std;

//class Fivegleton {
//private:
//	int m_id;
//	static map<int, Fivegleton*> m_instances;
//	Fivegleton(int id) : m_id(id) {}
//public:
//	// stergem copy constructorul, operatorul =
//	Fivegleton(const Fivegleton& m) = delete;
//	Fivegleton(const Fivegleton&& m) = delete;
//	Fivegleton& operator=(const Fivegleton& m) = delete;
//	~Fivegleton()
//	{
//		for (auto& el : m_instances)
//		{
//			delete el.second;
//		}
//		m_instances.clear();
//	}
//	static Fivegleton* getInstance(int id)
//	{
//		if (m_instances.find(id) != m_instances.end())
//		{
//			return m_instances[id];
//		}
//		else
//		{
//			if (m_instances.size() < 5)
//			{
//				m_instances[id] = new Fivegleton(id);
//				return m_instances[id];
//			}
//			else
//			{
//				cout << "Nu se mai pot crea noi instante\n";
//				return nullptr;
//			}
//		}
//	}
//	int getId() const
//	{
//		return m_id;
//	}
//};
//
//map<int, Fivegleton*> Fivegleton::m_instances;
//
//int main()
//{
//	Fivegleton* instance_1 = Fivegleton::getInstance(1);
//	cout << "element id = " << instance_1->getId() << endl;
//	Fivegleton* instance_2 = Fivegleton::getInstance(1);
//	cout << "element id = " << instance_1->getId() << endl;
//}

class Pizza
{
public:
	virtual string getDescription() const = 0;
	virtual double getCost() const = 0;
};

class PizzaSimpla : public Pizza
{
public:
	string getDescription() const
	{
		return "Pizza Simpla ";
	}

	double getCost() const
	{
		return 5.00;
	}
};
class PizzaDecorator : public Pizza
{
protected:
	Pizza* p;
public:
	PizzaDecorator(Pizza* ptr) : p(ptr) {}

	string getDescription() const
	{
		return p->getDescription();
	}

	double getCost() const
	{
		return p->getCost();
	}
};

class Pepperoni : public PizzaDecorator
{
public:
	Pepperoni(Pizza* ptr) : PizzaDecorator(ptr) {}

	string getDescription() const
	{
		return p->getDescription() + "Pepperoni ";
	}

	double getCost() const
	{
		return p->getCost() + 2.5;
	}
};
class Branza : public PizzaDecorator
{
public:
	Branza(Pizza* ptr) : PizzaDecorator(ptr) {}

	string getDescription() const
	{
		return p->getDescription() + "Branza ";
	}

	double getCost() const
	{
		return p->getCost() + 3.5;
	}
};

class Masline : public PizzaDecorator
{
public:
	Masline(Pizza* ptr) : PizzaDecorator(ptr) {}

	string getDescription() const
	{
		return p->getDescription() + "Masline ";
	}

	double getCost() const
	{
		return p->getCost() + 3.3;
	}
};
int main()
{
	Pizza* p = new PizzaSimpla();
	cout << p->getDescription() << " costul = " << p->getCost() << endl;

	p = new Branza(p);
	cout << p->getDescription() << " costul = " << p->getCost() << endl;

	p = new Masline(p);
	cout << p->getDescription() << " costul = " << p->getCost() << endl;

	p = new Pepperoni(p);
	cout << p->getDescription() << " costul = " << p->getCost() << endl;

	p = new Pepperoni(p);
	cout << p->getDescription() << " costul = " << p->getCost() << endl;
}