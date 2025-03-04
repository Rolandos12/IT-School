// c21_supraincarcarea operatorilor si inca ceva.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

//Creați o clasă Counter care să aibă un contor și supraîncărcați operatorii de
//pre - incrementare, post - incrementare, pre - decrementare și post - decrementare.
//Implementați un program care să incrementeze și să decrementeze contorul și să afișeze valorile acestuia


//class Counter
//{
//public:
//	Counter(int val = 0) : i(val)
//	{
//	//this->i = val;
//
//	}
//	void afisare() const
//	{
//		cout << " i= " << i << endl;
//
//	}
//
//	//pre intrement
//	Counter& operator ++()
//	{
//		++i;
//		return *this;   //returnez obiectul ce se gaseste la adresa lui this
//	}
//
//	//post increment
//	Counter operator ++(int)
//	{
//		Counter temp = *this;
//		i++;
//		return temp;
//	}
//
//	// pre decrementare
//
//	Counter& operator --()
//	{
//		i -= 5;
//		return *this;
//	}
//
//	Counter operator --(int)
//	{
//		Counter temp = *this;
//		i--;
//		return temp;
//	}
//	
//
//private:
//	int i;
//};
//
//
//
//int main()
//{
//	Counter c(100);
//	--c;
//	c--;
//
//	c.afisare();
//
//}


// Creați o clasă Complex care să reprezinte numere complexe și supraîncărcați
//operatorii + și < .Implementați un program care să adune două numere complexe și să afișeze rezultatul.

//class Complex
//{
//
//private: 
//
//	int real, imaginar;
//	//int val;
//
//
//public:
//
//	Complex(int re = 0, int im = 0) : real(re), imaginar(im) {};
//	Complex operator + (const Complex& c)
//	{
//		return Complex(real + c.real, imaginar + c.imaginar);
//	}
//
//	void afisare() const
//	{
//		cout << "Real= " << real << " imaginar= "  << imaginar << endl;
//	}
//
//	bool operator < (const Complex& c) const
//	{
//		if (this->real < c.real && this->imaginar < c.imaginar)
//			return true;
//		else
//			return false;
//	}
//
//
//};
//
//int main()
//{
//	Complex c(4, 8), c1(5, 7);
//	Complex c2(c + c1);
//	c2.afisare();
//	cout << (c1 < c2);
//
//
//}


#include <iostream>
#include <string>
#include <vector>

class Motor {
public:
    std::string tip;
    int putere;

    Motor(std::string t, int p) : tip(t), putere(p) {}
};

class Masina {
public:
    std::string marca;
    std::string model;
    Motor motor;

    Masina(std::string m, std::string mo, Motor motor) : marca(m), model(mo), motor(motor) {}

    virtual void afiseaza() {
        std::cout << "Marca: " << marca << ", Model: " << model << ", Motor: " << motor.tip << " (" << motor.putere << " CP)" << std::endl;
    }
};

class MasinaElectrica : public Masina {
public:
    int autonomie;

    MasinaElectrica(std::string m, std::string mo, Motor motor, int a) : Masina(m, mo, motor), autonomie(a) {}

    void afiseaza() override {
        Masina::afiseaza();
        std::cout << "Autonomie: " << autonomie << " km" << std::endl;
    }
};

class MasinaHibrida : public Masina {
public:
    int capacitateRezervor;

    MasinaHibrida(std::string m, std::string mo, Motor motor, int c) : Masina(m, mo, motor), capacitateRezervor(c) {}

    void afiseaza() override {
        Masina::afiseaza();
        std::cout << "Capacitate rezervor: " << capacitateRezervor << " litri" << std::endl;
    }
};

class ParcAuto {
public:
    std::vector<Masina*> masini;

    void adaugaMasina(Masina* masina) {
        masini.push_back(masina);
    }

    void afiseazaMasini() {
        for (auto& masina : masini) {
            masina->afiseaza();
        }
    }
};

int main() {
    Motor motorElectric("Electric", 150);
    Motor motorHibrid("Hibrid", 200);

    MasinaElectrica* tesla = new MasinaElectrica("Tesla", "Model S", motorElectric, 500);
    MasinaHibrida* prius = new MasinaHibrida("Toyota", "Prius", motorHibrid, 45);

    ParcAuto parc;
    parc.adaugaMasina(tesla);
    parc.adaugaMasina(prius);

    parc.afiseazaMasini();

    delete tesla;
    delete prius;

    return 0;
}