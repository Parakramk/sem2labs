/*
2.Program to compute bn mod m using recursion
*/
#include<iostream>
using namespace std;
int power(int a, int n) {
    // if (n == 0) {
    //     return 1;
    // }
    // else {
    //     return a * (power(a, n - 1));
    // }
    return (n == 0) ? 1 : a * (power(a, n - 1));
}
int main() {
    int number, p, m;
    cout << "Enter the base number: ";
    cin >> number;
    cout << "Enter the power number: ";
    cin >> p;
    cout << "Enter the value of m: ";
    cin >> m;
    int result = power(number, p);
    result = result % m;
    cout << "Result = " << result << endl;
    return 0;
}
/*
OUTPUT:
Enter the base number: 9
Enter the power number: 3
Enter the value of m: 5
Result = 4
*/