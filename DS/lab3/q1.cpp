/*
WAP TO PRINT FLOOR AND CEILING VALUE OF ANY NUMBER
*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a;
    cout << "Enter a Number: ";
    cin >> a;
    cout << "The Floor Value of " << a << " is: " << floor(a) << endl;
    cout << "The Ceiling Value of " << a << " is: " << ceil(a) << endl;
    return 0;
}