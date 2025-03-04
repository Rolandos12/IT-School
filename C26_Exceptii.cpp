// C26_Exceptii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//// Aruncarea Excep?iilor Personalizate: Creeaz? o clas? personalizat? de excep?ie
//NegativeValueException.Scrie un program care calculeaz? r?d?cina p?trat? a unui num?r
//introdus de utilizator.Dac? utilizatorul introduce un num?r negativ, programul ar trebui s?
//arunce o excep?ie de tip NegativeValueException ?i s? prind? aceast? excep?ie pentru a afi?a
//un mesaj corespunz?tor.

float div(float a, float b)
{
    if (b == 0)
        throw "impartire la zero imposibila";
    return a / b;

}

void calculate(float a, float b)
{
    try
    {
        float res = div(a, b);
        cout << "rezultatul este= " << res << endl;
    } 
    catch (const char* e)
    {
        cout << "exceptia a fost prinsa: " << e;
        throw; // re-arunca exceptia
    }

}

int main()
{
    float a = 100;
    float b = 3;
    try 
    {
        calculate(a, b);
    }
    catch (const char* e)
    {
        cout << "exceptie prinsa in main si aruncata din functia calculata: " << e << endl;
    }

    return 0;
}

