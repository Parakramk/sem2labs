/*
4. You're tasked with building a drawing application that supports various
shapes. To achieve this, you decide to use an abstract class called Shape
as the base class for different types of shapes. The Shape class has a pure
virtual function double area() which needs to be implemented by each
derived class. Additionally, the Shape class should have a member
function void printInfo() const that prints "This is a shape." Create the
necessary classes with appropriate member functions and inheritance
relationships. Write the program to demonstrate the concept of abstract
classes by using an array of pointers to Shape objects, where some pointers
point to specific shape objects such as Circle and Rectangle. Implement
the area() function in the derived classes and use these pointers to call the
printInfo() and area() functions for each object.
*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function

    void printInfo() const {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() const {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double length;

public:
    Rectangle(double w, double l) {
        width = w;
        length = l;
    }

    double area() const {
        return width * length;
    }
};

int main() {
    Shape* shapes[3];

    Circle c1(5.0);
    Circle c2(2.0);
    Rectangle r1(4.0, 6.0);

    shapes[0] = &c1;
    shapes[1] = &r1;
    shapes[2] = &c2;

    // Use the pointers to call printInfo() and area() functions for each object
    for (int i = 0; i < 3; i++) {
        shapes[i]->printInfo();
        cout << "Area: " << shapes[i]->area() << endl;
    }

    return 0;
}

/*
OUTPUT:
This is a shape.
Area: 78.5
This is a shape.
Area: 24
This is a shape.
Area: 12.56
*/