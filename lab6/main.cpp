#include <iostream>
#include "include/Node.h"
#include "include/Vector.h"
using namespace std;

int main() {
    Node a;
    Node b;

    a.updateValue(2, 5);
    b.updateValue(5, 9);

    cout << "Punkt a:\n"; a.display();
    cout << "\nPunkt b:\n"; b.display();
    cout << endl;

    double distance = pointsDistance(a, b);
    cout <<"Dystans miedzy a i b: "<< distance << endl;

    Vector v1(1, 2), v2(5,10);

    cout << "\nWektor 1" << endl;
    v1.print();
    cout << "\nWektor 2" << endl;
    v2.print();

    cout << "\nWynik dodawania" << endl;
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);
    v3.print();

    cout << "\nWynik odejmowania" << endl;
    Vector v4 = v1 - v2;
    v4 = v1.operator-(v2);
    v4.print();

    cout << "\nWektor przeciwny do wektora 1" << endl;
    Vector v5 = -v1;
    v5.print();

    cout << "\nWektor przeciwny do wektora 2" << endl;
    Vector v9 = -v2;
    v9.print();

    cout << "\nMnozenie przez skalar wektora 1" << endl;
    double scalar = 3;
    Vector v6 = v1 * scalar;
    v6.print();

    cout << "\nMnozenie przez skalar wektora 2" << endl;
    Vector v10 = v2 * scalar;
    v10.print();

    cout << "\nIloczyn skalarny wektorow" << endl;
    Vector v7 = v1 * v2;
    v7 = v1.operator*(v2);
    v7.print();

    cout << "\nPorownanie wektorow" << endl;
    Vector v8 = v1 = v2;
    v8 = v1.operator=(v2);
    v8.print();

    return 0;
}