/*
4. Create a Scientific Calculator program using two classes, Calculator and
MathOperations, where MathOperations is a Friend class of Calculator.
The Calculator class has private data members for two input values and
public member functions for initialization and data retrieval. The
MathOperations class contains static member functions for addition,
subtraction, multiplication, and division operations, and it can access the
private data members of the Calculator class. Implement the classes in C++
and demonstrate the scientific calculator's functionality with appropriate
test cases.
*/

#include<iostream>
using namespace std;

class Calculator;

class MathOperations {

public:
    // Static methods to perform operations
    static double add(const Calculator& calc);
    static double subtract(const Calculator& calc);
    static double multiply(const Calculator& calc);
    static double divide(const Calculator& calc);
};

class Calculator {
private:
    double num1;
    double num2;
public:
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Friend declaration so that MathOperations can access private members
    friend class MathOperations;

    double getNum1() const {
        return num1;
    }

    double getNum2() const {
        return num2;
    }
};

double MathOperations::add(const Calculator& calc) {
    return calc.num1 + calc.num2;
}

double MathOperations::subtract(const Calculator& calc) {
    return calc.num1 - calc.num2;
}

double MathOperations::multiply(const Calculator& calc) {
    return calc.num1 * calc.num2;
}

double MathOperations::divide(const Calculator& calc) {
    return (calc.num2 == 0) ? (cout << "Math error.. Division by zero." << endl, 0.0) : calc.num1 / calc.num2;
}

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator calc(num1, num2);

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1/2/3/4): ";

    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Result: " << MathOperations::add(calc) << endl;
        break;
    case 2:
        cout << "Result: " << MathOperations::subtract(calc) << endl;
        break;
    case 3:
        cout << "Result: " << MathOperations::multiply(calc) << endl;
        break;
    case 4:
        cout << "Result: " << MathOperations::divide(calc) << endl;
        break;
    default:
        cout << "Invalid Operation." << endl;
        break;
    }

    return 0;
}
/*
OUTPUT:
Enter two numbers: -9
2
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1/2/3/4): 3
Result: -18
*/

