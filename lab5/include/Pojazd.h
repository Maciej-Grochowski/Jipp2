//
// Created by student on 08.11.21.
//


#ifndef LAB5_POJAZD_H
#define LAB5_POJAZD_H

#include <string>
using namespace std;

class Pojazd{
private:
    string nazwa;
    string marka;
    int numer_rejestracyjny;
public:
    int ilosc_miejsc;
    char **tab;


    Pojazd(int numer_rejestrayjny, string nazwa, int ilosc_miejsc, string marka);

    void wypisz_informacje();
    void zmien_informacje(int numer_miejsca, char informacje_o_pasazerze[20]);

    Pojazd(Pojazd& pojazd);

    string get_nazwa();
    void set_nazwa(string nazwa);

    int get_numer_rejestracyjny();
    void set_numer_rejestracyjny(int numer_rejestracyjny);

    string get_marka();
    void set_marka(string marka);

    ~Pojazd();
};

#endif //LAB5_POJAZD_H
