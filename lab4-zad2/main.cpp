#include <iostream>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok;
    string kolor;
    double przebieg;
};

int main()
{
    samochod s1 = {"renault","clio",2001,"czarny",23445.78};
    samochod s2 = {"suzuki","sx",2015,"zielony",4444.99};
    samochod s3 = {"citroen","picasso",2018,"czerwony",3334.11};
    samochod s4 = {"opel","astra",2020,"niebieski",122.3};

    cout << endl << "Samochod pierwszy:" << endl << "Marka:" << s1.marka << endl << "Model:" << s1.model << endl << "Rok:" << s1.rok<< endl
         << "Model:" << s1.kolor << endl << "Przebieg:" << s1.przebieg << endl << endl;
    cout << "Samochod drugi:" << endl << "Marka:" << s2.marka << endl << "Model:" << s2.model << endl << "Rok:" << s2.rok<< endl
         << "Model:" << s2.kolor << endl << "Przebieg:" << s2.przebieg << endl << endl;
    cout << "Samochod trzeci:" << endl << "Marka:" << s3.marka << endl << "Model:" << s3.model << endl << "Rok:" << s3.rok<< endl
         << "Model:" << s3.kolor << endl << "Przebieg:" << s3.przebieg << endl << endl;
    cout << "Samochod czwarty:" << endl << "Marka:" << s4.marka << endl << "Model:" << s4.model << endl << "Rok:" << s4.rok<< endl
         << "Model:" << s4.kolor << endl << "Przebieg:" << s4.przebieg << endl;
    return 0;
}