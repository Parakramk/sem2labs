// Write a program to compare magnitude of complex numbers by overloading
// <,>,== and != operators

#include <iostream>
#include <cmath>
using namespace std;

class Complexx
{
private:
    float real, imag;

public:
    void input()
    {
        cout << "Enter real and imaginary part:" << endl;
        cin >> real >> imag;
    }
    void display()
    {
        cout << "(" << real << " ," << imag << ")" << endl;
    }
    float magnitude() const
    {
        return sqrt(real * real + imag * imag);
    }

    bool operator<(Complexx c)
    {
        return magnitude() < c.magnitude();
    }

    bool operator>(Complexx c)
    {
        return magnitude() > c.magnitude();
    }

    bool operator==(Complexx c)
    {
        return magnitude() == c.magnitude();
    }

    bool operator!=(Complexx c)
    {
        return magnitude() != c.magnitude();
    }
};

int main()
{
    Complexx c1, c2;
    c1.input();
    c2.input();

    c1.display();
    c2.display();

    if (c1 < c2)
        cout << "First object is smaller than second object" << endl;
    if (c1 > c2)
        cout << "First object is greater than second object" << endl;
    if (c1 == c2)
        cout << "Both objects are equal" << endl;
    if (c1 != c2)
        cout << "Both objects are not equal" << endl;

    return 0;
}

/*
SAMPLE OUTPUT:
Enter real and imaginary part:
2
3
Enter real and imaginary part:
4
6
(2 ,3)
(4 ,6)
First object is smaller than second object
Both objects are not equal
*/