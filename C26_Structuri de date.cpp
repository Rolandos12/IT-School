// C26_Structuri de date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
#define MAX 5

//class Stiva
//{
//private:
//	int arr[MAX];
//	int top;
//public:
//	Stiva()
//	{
//		top = -1;
//	}
//
//	void push(int elem)
//	{
//		if (top < (MAX - 1))
//		{
//			arr[++top] = elem;
//			cout << "Elementul " << elem << " a fost adaugat in stiva" << endl;
//		}
//		else
//		{
//			cout << "Stiva este plina" << endl;
//		}
//	}
//	int pop()
//	{
//		if (top == -1)
//		{
//			cout << "Stiva este goala" << endl;
//			return -1;
//		}
//		else
//		{
//			int temp = arr[top];
//			arr[top--] = 0;
//			return temp;
//		}
//	}
//
//	int peek()
//	{
//		if (top == -1)
//		{
//			cout << "Stiva este goala" << endl;
//			return -1;
//		}
//		else
//		{
//			return arr[top];
//		}
//	}
//	bool isEmpty()
//	{
//		return (top < 0);
//	}
//
//	bool isFull()
//	{
//		return (top >= (MAX - 1));
//	}
//
//	void afisare()
//	{
//		for (int i = top; i >= 0; --i)
//		{
//			cout << arr[i] << endl;
//		}
//	}
//};
//int main()
//{
//	Stiva s;
//	cout << "Este goala stiva? " << s.isEmpty() << endl;;
//	s.push(22);
//	s.push(12);
//	s.push(99);
//	s.push(40);
//	s.push(1);
//	// nu se adauga
//	s.push(4);
//	s.afisare();
//	cout << "Este plina stiva? " << s.isFull() << endl;
//	int temp = s.pop();
//	cout << "Elementul eliminat este: " << temp << endl;
//	s.afisare();
//	s.pop();
//	s.pop();
//	cout << endl;
//	s.afisare();
//	s.pop();
//	s.pop();
//	// stiva este goala
//	s.pop();
//}

//   stiva folosind std::vector
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Stiva
//{
//private:
//	vector<int> v;
//public:
//
//	void push(int elem)
//	{
//		v.push_back(elem);
//		cout << "Elementul " << elem << " a fost adaugat in stiva" << endl;
//	}
//
//	int pop()
//	{
//		if (v.empty())
//		{
//			cout << "Stiva este goala" << endl;
//			return -1;
//		}
//		else
//		{
//			int temp = v.back();
//			v.pop_back();
//			return temp;
//		}
//	}
//	int peek()
//	{
//		if (v.empty())
//		{
//			cout << "Stiva este goala" << endl;
//			return -1;
//		}
//		else
//		{
//			return v.back();
//		}
//	}
//
//	bool isEmpty()
//	{
//		return v.empty();
//	}
//
//	void afisare()
//	{
//		for (int i = v.size() - 1; i >= 0; --i)
//		{
//			cout << v[i] << endl;
//		}
//	}
//};
//int main()
//{
//	Stiva s;
//	cout << "Este goala stiva? " << s.isEmpty() << endl;;
//	s.push(22);
//	s.push(12);
//	s.push(99);
//	s.push(40);
//	s.push(1);
//	s.push(4);
//	s.afisare();
//
//	int temp = s.pop();
//	cout << "Elementul eliminat este: " << temp << endl;
//	s.afisare();
//	s.pop();
//	s.pop();
//	cout << endl;
//	s.afisare();
//	s.pop();
//	s.pop();
//	s.pop();
//	cout << endl;
//	s.afisare();
//}

//problema 3  din stiva maria are mere sa rasturnam si sa iasa airam era erem

//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Stiva
//{
//private:
//	vector<char> v;
//public:
//
//	void push(char elem)
//	{
//		v.push_back(elem);
//		//cout << "Elementul " << elem << " a fost adaugat in stiva" << endl;
//	}
//
//	char pop()
//	{
//		if (v.empty())
//		{
//			//cout << "Stiva este goala" << endl;
//			return '\0';
//		}
//		else
//		{
//			char temp = v.back();
//			v.pop_back();
//			return temp;
//		}
//	}
//	char peek()
//	{
//		if (v.empty())
//		{
//			//cout << "Stiva este goala" << endl;
//			return '\0';
//		}
//		else
//		{
//			return v.back();
//		}
//	}
//
//	bool isEmpty()
//	{
//		return v.empty();
//	}
//
//	void afisare()
//	{
//		for (int i = v.size() - 1; i >= 0; --i)
//		{
//			cout << v[i] << endl;
//		}
//	}
//};
//int main()
//{
//	Stiva s;
//	string str = "maria are mere";
//	for (int i = 0; i <= str.size(); ++i)
//	{
//		if (str[i] != ' ' && str[i] != '\0')
//		{
//			s.push(str[i]);
//		}
//		else
//		{
//			while (!s.isEmpty())
//			{
//				cout << s.pop();
//			}
//			cout << " ";
//		}
//	}
//}