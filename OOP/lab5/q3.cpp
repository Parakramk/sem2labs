/*
You are given a Rational class that represents rational numbers (fractions).
The class has two private member variables: numerator (to store the
numerator) and denominator (to store the denominator) of the rational
number. Your task is to overload the binary operators +, -, *, and / for this
class to perform arithmetic operations with rational numbers. Make sure to
simplify the rational numbers after performing arithmetic operations to
represent them in their simplest form (i.e., with the smallest possible
integer numerator and denominator). You may assume that the input
rational numbers will have valid values, and the denominator will never be
zero.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// Function to calculate the common factor
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

class Rational
{
private:
    int numerator, denominator;

public:
    Rational(int num = 0, int denom = 1)
    {
        if (denom == 0)
        {
            cout << "Denominator is Zero.. Math Error.. Exiting" << endl;
            exit(1);
        }
        int cf = gcd(num, denom); // Common Factor
        numerator = num / cf;
        denominator = denom / cf;
    }

    Rational operator+(const Rational other) const
    {
        int new_num = numerator * other.denominator + other.numerator * denominator;
        int new_demon = denominator * other.denominator;
        return Rational(new_num, new_demon);
    }

    Rational operator-(const Rational other) const
    {
        int new_num = numerator * other.denominator - other.numerator * denominator;
        int new_demon = denominator * other.denominator;
        return Rational(new_num, new_demon);
    }

    Rational operator*(const Rational other) const
    {
        int new_num = numerator * other.numerator;
        int new_demon = denominator * other.denominator;
        return Rational(new_num, new_demon);
    }

    Rational operator/(const Rational other) const
    {
        int new_num = numerator * other.denominator;
        int new_demon = denominator * other.numerator;
        return Rational(new_num, new_demon);
    }

    void display() const
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Rational r1(4, 5);
    Rational r2(3, 4);

    Rational sum = r1 + r2;
    Rational difference = r1 - r2;
    Rational product = r1 * r2;
    Rational quotient = r1 / r2;

    cout << "r1: ";
    r1.display();
    cout << "r2: ";
    r2.display();

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
    cout << "Product: ";
    product.display();
    cout << "Quotient: ";
    quotient.display();

    return 0;
}
/*
SAMPLE OUTPUT:
r1: 4/5
r2: 3/4
Sum: 31/20
Difference: 1/20
Product: 3/5
Quotient: 16/15
*/