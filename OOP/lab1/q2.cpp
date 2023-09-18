/*
2. Implement a macro in C++ called "SQUARE" that takes an argument and
returns the square of that number. Use macro expansion techniques to
compute the square value without using any built-in mathematical functions.
*/

#include<iostream>

#define SQUARE(x) ((x) * (x))

using namespace std;
int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cout << "The square of " << number << " is " << SQUARE(number) << endl;

    return 0;
}
/*
OUTPUT:
Enter a number: 8
The square of 8 is 64
*/