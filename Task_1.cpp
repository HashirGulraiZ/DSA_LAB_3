#include "Shape.h"

int main() {
    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    cout << "Circle Area: " << c.area() << endl;
    cout << "Rectangle Area: " << r.area() << endl;

    return 0;
}