
#ifndef LAB7Z_POLIMORFIZM_H
#define LAB7Z_POLIMORFIZM_H

using namespace std;

class Figure{
public:
    virtual double getArea() = 0;

};

class Circle : public Figure{
protected:
    double r;
public:
    Circle();
    Circle(double r);

    double pole();

};

class Rectangle : public Figure{
protected:
    double a;
    double b;
public:
    Rectangle();
    Rectangle(double a, double b);
};


#endif //LAB7Z_POLIMORFIZM_H
