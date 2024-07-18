// tema_curs16_oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;

class Reteta
{
private:
    string nume;
    string ingrediente;
    string instructiuni;
    string review;

public:
    Reteta(string n, string ing, string ins, string rev)
        : nume(n), ingrediente(ing), instructiuni(ins), review(rev) {}

    void setNume(string n)
    {
        nume = n;
    }

    string getNume() const
    {
        return nume;
    }

    void setIngrediente(string ing)
    {
        ingrediente = ing;
    }

    string getIngredients() const
    {
        return ingrediente;
    }

    void setInstructiuni(string ins)
    {
        instructiuni = ins;
    }

    string getInstructiuni() const
    {
        return instructiuni;
    }

    void setReview(string rev)
    {
        review = rev;
    }

    string getReview() const
    {
        return review;
    }

    void display() const
    {
        cout << "Nume reteta: " << nume << endl;
        cout << "Ingrediente: " << ingrediente << endl;
        cout << "Instructiuni: " << instructiuni << endl;
        cout << "Review: " << review << endl;
    }
};

int main()
{

    Reteta c1("Cozonac", "Faina, drojdie, lapte, zahar, oua", "Se pun ingredientele intr-un bol si se amesteca. Apoi se baga la cuptor", "A iesit bun cozonacul, reteta este buna");
    c1.display();

    return 0;
}