/*
1. Create a C++ class called Fraction that represents a fraction with private
member variables numerator and denominator. Implement a non-member
function called multiply() that takes two Fraction objects as parameters and
returns the result of multiplying the fractions together as a new Fraction
object. Make the multiply() function a friend of the Fraction class using
the friend keyword. Demonstrate the usage of the multiply() function in a
program.
*/

#include <iostream>
#include <cstdlib>
using namespace std;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1) {
        if (denom == 0) {
            cout << "Denominator is Zero.. Math Error.. Exiting" << endl;
            exit(1);
        }
        int cf = gcd(num, denom); // Common Factor
        numerator = num / cf;
        denominator = denom / cf;
    }

    friend Fraction multiply(const Fraction f1, const Fraction f2);

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

Fraction multiply(const Fraction f1, const Fraction f2) {
    int newNum = f1.numerator * f2.numerator;
    int newDenom = f1.denominator * f2.denominator;
    return Fraction(newNum, newDenom);
}

int main() {
    Fraction frac1(4, 8);
    Fraction frac2(3, 4);

    cout << "Fraction 1: ";
    frac1.display();

    cout << "Fraction 2: ";
    frac2.display();

    Fraction result = multiply(frac1, frac2);

    cout << "Result of multiplication: ";
    result.display();

    return 0;
}

/*
OUTPUT:
Fraction 1: 1/2
Fraction 2: 3/4
Result of multiplication: 3/8
*/