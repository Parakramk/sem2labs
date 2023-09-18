/*
1. Write a program to read inputs from a keyboard and display the output in the
monitor using Input/Output streams.
*/

#include <iostream>
using namespace std;

int main() {
    int input;

    cout << "Enter a number: ";
    cin >> input;
    cout << "The number you entered is: " << input << endl;

    return 0;
}

/*
OUTPUT:
Enter a number: 7
The number you entered is: 7
*/