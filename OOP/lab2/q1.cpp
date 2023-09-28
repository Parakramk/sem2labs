/*
1. WAP to find largest of two numbers using inline function.
*/
#include<iostream>
using namespace std;

inline int large(int n1, int n2) {
    return (n1 > n2) ? n1 : n2;
}

int main() {
    int num1, num2;
    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;
    cout << "Tne Largest Number is: " << large(num1, num2) << endl;
    return 0;
}



/*
OUTPUT:
Enter Two Numbers: 8
4
Tne Largest Number is: 8
*/