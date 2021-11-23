#include <iostream>
#include "include/Dziedziczenie.h"
#include "include/Polimorfizm.h"

using namespace std;

int main() {
    Prostokat prostokat(5, 8);
    prostokat.uzupelnij_dane("kwadrat", "czerwony");

    prostokat.wypisz_dane();
    cout << "obwod: " << prostokat.obwod() << endl;
    cout << "pole: " << prostokat.pole() << endl;

    cout << endl;

    Trojkat trojkat(5, 8, 2, 3);
    trojkat.uzupelnij_dane("trojkat", "zielony");

    trojkat.wypisz_dane();
    cout << "obwod: " << trojkat.obwod() << endl;
    cout << "pole: " << trojkat.pole() << endl;

    //Circle circle;
    //Figure *circle = new Circle(5);
    //cout << "Circle area: " << circle->getArea() << endl;
    return 0;
}