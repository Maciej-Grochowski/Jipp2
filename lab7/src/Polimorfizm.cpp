#include <iostream>
#include "../include/Polimorfizm.h"

using namespace std;

Circle::Circle() : r(0) {}

Circle::Circle(double r) : r(r) {}

double Circle::pole() {
    return getArea();
}

Rectangle::Rectangle(double a, double b) : a(a), b(b) {}


