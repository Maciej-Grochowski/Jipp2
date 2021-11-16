#include "../include/Vector.h"
#include <iostream>
#include <math.h>

using namespace std;


Vector::Vector() {
    x = 0;
    y = 0;
}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
        return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
};

Vector& Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector& Vector::operator-=(const Vector &rhs) {
    this->x = this->x - rhs.x;
    this->y = this->y - rhs.y;
    return *this;
}

Vector Vector::operator-() const {
    return {-x, -y};
}

Vector Vector::operator*(const double scalar) const {
    return {x * scalar, y * scalar};
}

Vector& Vector::operator*=(const double scalar) {
    this->x = this->x * scalar;
    this->y = this->y * scalar;
    return *this;
}

Vector Vector::operator*(const Vector &rhs) const {
    return {x * rhs.x, y * rhs.y};
};

Vector& Vector::operator*=(const Vector &rhs) {
    this->x = this->x * rhs.x;
    this->y = this->y * rhs.y;
    return *this;
}

Vector Vector::operator=(const Vector &rhs) const {
    return {x * rhs.x, y * rhs.y};
};

Vector& Vector::operator==(const Vector &rhs) {
    this->x = this->x * rhs.x;
    this->y = this->y * rhs.y;
    return *this;
}

void Vector::print() {
    cout << "x: " << x << "\ty: " << y << endl;
}