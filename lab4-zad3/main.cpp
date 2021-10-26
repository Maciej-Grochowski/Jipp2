#include <iostream>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok;
    string kolor;
};

int main()
{
    samochod s1 = {"renault","clio",2001,"czarny"};
    samochod s2 = {"suzuki","sx",2015,"zielony"};
    samochod s3 = {"citroen","picasso",2018,"czerwony"};
    samochod s4 = {"opel","astra",2020,"niebieski"};

    cout << endl << "Samochod pierwszy:" << endl << "Marka:" << s1.marka << endl << "Model:" << s1.model << endl << "Rok:" << s1.rok<< endl
         << "Model:" << s1.kolor << endl << endl;
    cout << "Samochod drugi:" << endl << "Marka:" << s2.marka << endl << "Model:" << s2.model << endl << "Rok:" << s2.rok<< endl
         << "Model:" << s2.kolor << endl << endl;;
    cout << "Samochod trzeci:" << endl << "Marka:" << s3.marka << endl << "Model:" << s3.model << endl << "Rok:" << s3.rok<< endl
         << "Model:" << s3.kolor << endl << endl;;
    cout << "Samochod czwarty:" << endl << "Marka:" << s4.marka << endl << "Model:" << s4.model << endl << "Rok:" << s4.rok<< endl
         << "Model:" << s4.kolor << endl;
    return 0;
}