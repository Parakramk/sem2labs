/*
ECUCLIDEAN ALGOROTHM TO FIND GCD
*/
#include<iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
int main() {
    int a, b, c;
    cout << "Enter the Two Numbers: ";
    cin >> a >> b;
    c = gcd(a, b);
    cout << "GCD OF " << a << " and " << b << " is: " << c << endl;
}