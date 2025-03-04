// C27_Stive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#define MAX 100


using namespace std;


//problema 5:
//void sortareStiva(Stiva & input)
//{
//	Stiva temp;
//
//	while (!input.isEmpty())
//	{
//		int temp_elem = input.pop();
//
//		while (!temp.isEmpty() && temp.peek() > temp_elem)
//		{
//			input.push(temp.pop());
//		}
//
//		temp.push(temp_elem);
//	}
//
//	while (!temp.isEmpty())
//	{
//		input.push(temp.pop());
//	}
//
//}
//int main()
//{
//
//	Stiva s;
//	s.push(42);
//	s.push(3);
//	s.push(10);
//	s.push(11);
//	s.push(5);
//
//	sortareStiva(s);
//
//	while (!s.isEmpty())
//	{
//		cout << s.pop() << "   ";
//	}
//	cout << endl;
//}


//class Stiva
//{
//private:
//	vector<int> v;
//public:
//
//	void push(int elem)
//	{
//		v.push_back(elem);
//		//cout << "Elementul " << elem << " a fost adaugat in stiva" << endl;
//	}
//
//	int pop()
//	{
//		if (v.empty())
//		{
//			//cout << "Stiva este goala" << endl;
//			return '\0';
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
//bool palindrom(string& str)
//{
//	Stiva s;
//	int n = str.size();
//	for (int i = 0; i < n; i++)
//	{
//		if (isalnum(str[i]))
//		{
//			s.push(tolower(str[i]));
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (isalnum(str[i]))
//		{
//			if (s.pop() != tolower(str[i]))
//				return false;
//		}
//	}
//
//	return true;
//}



//Date două stive, intercalează elementele lor astfel încât rezultatul să fie o singură stivă care păstrează ordinea elementelor din ambele stive, începând cu elementul din vârful primei stive, urmat de elementul din vârful celei de - a doua stive, și așa mai departe.
//Exemplu:
//Intrare:
//Stiva 1 : [1, 3, 5]
//Stiva 2 : [2, 4, 6]
//Ieșire : [1, 2, 3, 4, 5, 6]


//class Stiva
//{
//private:
//	vector<int> v;
//public:
//
//	void push(int elem)
//	{
//		v.push_back(elem);
//		//cout << "Elementul " << elem << " a fost adaugat in stiva" << endl;
//	}
//
//	int pop()
//	{
//		if (v.empty())
//		{
//			//cout << "Stiva este goala" << endl;
//			return '\0';
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
//
//	void push(vector<int>)
//	{
//		for (auto& el : v)  
//		{
//			v.push_back(el);
//		}
//	}
//};
//
//Stiva interclasare(Stiva s1, Stiva s2)
//{
//	Stiva temp;
//
//	while (!s1.isEmpty() && !s2.isEmpty())
//	{
//		if (s1.peek() <= s2.peek())
//		{
//			temp.push(s1.pop());
//		}
//		else
//		{
//			temp.push(s2.pop());
//		}
//	}
//
//	while (!s1.isEmpty())
//	{
//		temp.push(s1.pop());
//	}
//
//	while (!s2.isEmpty())
//	{
//		temp.push(s2.pop());
//	}
//
//	return temp;
//}
//int main()
//{
//	Stiva s1, s2;
//	s1.push(5);
//	s1.push(3);
//	s1.push(1);
//
//	s2.push({ 9,8,6,4,2 });
//
//	Stiva res = interclasare(s1, s2);
//
//	res.afisare();
//
//}




//class Stiva
//{
//private:
//	vector<int> v;
//public:
//
//	void push(int elem)
//	{
//		v.push_back(elem);
//		//cout << "Elementul " << elem << " a fost adaugat in stiva" << endl;
//	}
//
//	int pop()
//	{
//		if (v.empty())
//		{
//			//cout << "Stiva este goala" << endl;
//			return '\0';
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
//
//	void push(vector<int>)
//	{
//		for (auto& el : v)  
//		{
//			v.push_back(el);
//		}
//	}
//};
//
//string removeDuplicates(string s)
//{
//	Stiva ss;
//	for (char chr : s)
//	{
//		if (!ss.isEmpty() && ss.peek() == chr)
//		{
//			ss.pop();
//		}
//		else
//		{
//			ss.push(chr);
//		}
//	}
//	string res;
//	while (!ss.isEmpty())
//	{
//		res = res + static_cast<char>(ss.pop());
//	}
//	return res;
//}
//
//int main()
//{
//	cout << "Duplicatele au fost sterse: " << removeDuplicates("abbac");
//}

// Implementați conceptul de coadă folosind un array static.

//class Coada
//{
//private:
//	int arr[MAX] = {};
//	int front;
//	int end;
//	int size;
//
//public:
//	Coada()
//	{
//		front = 0;
//		end = -1;
//		size = 0;
//		
//	}
//	int pop()
//	{
//		// sterge de la( capul cozii(fata)
//		if (size > 0)
//		{
//			cout << "coada este goala";
//			return -1;
//		}
//		else
//		{
//			int temp = arr[front];
//			front++;
//			size--;
//			return temp;
//		}
//	}
//
//	void push(int val)
//	{
//		if (size == MAX - 1)
//		{
//			cout << "coada este plina";
//
//		}
//		else
//		{
//
//			end++;
//			arr[end] = val;
//		}
//	}
//
//	int getFront()
//	{
//		if (size == 0)
//		{
//			cout << "coada este goala" << endl;
//			return -1;
//		}
//		return arr[front];
//	}
//
//
//	bool isEmpty()
//	{
//		return size == 0;
//	}
//	bool isFull()
//	{
//		return (size < MAX);
//	}
//};
//
//int main()
//{
//	Coada c;
//	c.push(11);
//	c.push(22);
//	c.push(33);
//	cout << c.pop() << endl;
//	cout << c.pop() << endl;
//	cout << c.pop() << endl;
//}

//Implementați conceptul de coadă folosind un vector

class Coada
{
private:
	vector<int> vec;

public:
	
	int pop()
	{
		// sterge de la( capul cozii(fata)
		if (vec.empty())
		{
			cout << "coada este goala";
			return -1;
		}
		else
		{
			
			int temp=vec.front();
			vec.erase(vec.begin());
				return temp;
		}
	}

	void push(int val)
	{
		vec.push_back(val);
	}

	int getFront()
	{
		return vec.front();
	}


	bool isEmpty()
	{
		return vec.empty();
	}
	

};

int main()
{
	Coada c;
	c.push(11);
	c.push(22);
	c.push(33);
	cout << c.pop() << endl;
	cout << c.pop() << endl;
	cout << c.pop() << endl;

}