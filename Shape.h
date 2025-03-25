#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};