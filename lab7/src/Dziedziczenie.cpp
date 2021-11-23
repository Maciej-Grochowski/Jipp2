#include <iostream>
#include "../include/Dziedziczenie.h"

using namespace std;

Prostokat::Prostokat() : a(0), b(0) {}

Prostokat::Prostokat(double a, double b) : a(a), b(b) {}

double Prostokat::obwod() {
    return 2 * a + 2 * b;
}

double Prostokat::pole() {
    return a * b;
}

void Figura::uzupelnij_dane(string nazwa, string kolor){
    this->nazwa = nazwa;
    this->kolor = kolor;
}

void Figura::wypisz_dane(){
    cout << "nazwa: " << nazwa << endl;
    cout << "kolor: " <<  kolor << endl;
}

Trojkat::Trojkat() : a(0), b(0), c(0), h(0) {}

Trojkat::Trojkat(double a, double b, double c, double h) : a(a), b(b), c(c), h(h) {}

double Trojkat::obwod() {
    return a + b + c;
}

double Trojkat::pole() {
    return 0.5 * a * h;
}