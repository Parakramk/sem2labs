/* CALCULATE FACCTORIAL
*/
#include<iostream>
using namespace std;
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main() {
    int n, fac;
    cout << "Enter any Positive Interger: ";
    cin >> n;
    fac = fact(n);
    cout << "The factorial of " << n << " is " << fac << endl;
}