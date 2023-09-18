/*
2. Suppose you are building a simple drawing application. You have a base class
called Shape and two derived classes called Circle and Square. Each class
has a member function void draw()that should print the shape's name
followed by " is drawn." Create the necessary classes with appropriate
member functions and inheritance relationships. Then, write a program that
demonstrates the concept of runtime polymorphism by using an array of
pointers to Shape objects, where some pointers point to Circle objects and
some to Square objects. Use these pointers to call the draw() function for each
object.
*/
#include <iostream>
using namespace std;

class Shape {
private:
    string name = "Shape";
public:
    virtual void draw() {
        cout << name << " is drawn." << endl;
    }
};

class Circle :public Shape {
private:
    string name = "Circle";
public:
    void draw() {
        cout << name << " is drawn." << endl;
    }
};

class Square :public Shape {
private:
    string name = "Square";
public:
    void draw() {
        cout << name << " is drawn." << endl;
    }
};

int main() {
    Circle c1;
    Square sq;
    Shape sh;

    Shape* S[] = { &c1,&sq,&sh };

    for (int i = 0; i < 3; i++) {
        S[i]->draw();
    }

    return 0;
}
/*
OUTPUT:
Circle is drawn.
Square is drawn.
Shape is drawn.
*/