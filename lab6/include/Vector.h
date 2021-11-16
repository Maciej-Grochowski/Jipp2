
#ifndef LAB6_VECTOR_H
#define LAB6_VECTOR_H

class Vector {
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    Vector operator+(const Vector &rhs) const;
    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs) const;
    Vector &operator-=(const Vector &rhs);

    Vector operator-() const;

    Vector operator*(const double scalar) const;
    Vector &operator*=(const double scalar);

    Vector operator*(const Vector &rhs) const;
    Vector &operator*=(const Vector &rhs);

    Vector operator=(const Vector &rhs) const;
    Vector &operator==(const Vector &rhs);


    void print();
};

#endif //LAB6_VECTOR_H
