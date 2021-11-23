
#ifndef LAB7Z_DZIEDZICZENIE_H
#define LAB7Z_DZIEDZICZENIE_H
#include <iostream>
using namespace std;

class Figura{
protected:
    string nazwa;
    string kolor;
public:
    void uzupelnij_dane(string nazwa, string kolor);
    void wypisz_dane();
};

class Prostokat : public Figura{
private:
    double a;
    double b;
public:
    Prostokat();
    Prostokat(double a, double b);

    double obwod();
    double pole();
};


class Trojkat : public Figura{
private:
    double a;
    double b;
    double c;
    double h;
public:
    Trojkat();
    Trojkat(double a, double b, double c, double h);

    double obwod();
    double pole();
};


#endif //LAB7Z_DZIEDZICZENIE_H
