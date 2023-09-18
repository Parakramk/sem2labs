/*
1. Create a class PositiveInteger that represents a positive integer. Implement
an overloaded unary operator - to perform negation on a positive integer
and return its negated value. The PositiveInteger class should ensure that
the value remains positive at all times, even after negation.
*/

#include <iostream>
using namespace std;

class PositiveInteger {
private:
    int value;

public:
    PositiveInteger(int val) {
        val > 0 ? value = val : (cout << "Value cannot be less than 0. Setting value to 0." << endl, value = 0);
    }

    int getValue() const {
        return value;
    }

    int operator-() const {
        return -value;
    }
};

int main() {
    PositiveInteger num1(10);
    PositiveInteger num2(5);

    int negNum1 = -num1;
    int negNum2 = -num2;

    cout << "Original num1: " << num1.getValue() << endl;
    cout << "Negative of num1: " << negNum1 << endl;
    cout << "Original num1: " << num1.getValue() << endl
        << endl; // To Show Original Value hasn't Changed

    cout << "Original num2: " << num2.getValue() << endl;
    cout << "Negative of num2: " << negNum2 << endl;
    cout << "Original num2: " << num2.getValue() << endl
        << endl; // To Show Original Value hasn't Changed
    return 0;
}
/*
SAMPLE OUTPUT:
Original num1: 10
Negative of num1: -10
Original num1: 10

Original num2: 5
Negative of num2: -5
Original num2: 5
*/
