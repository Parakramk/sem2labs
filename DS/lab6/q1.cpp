/*
CALCULATE A^N
*/


#include<iostream>
using namespace std;
int pow(int n, int p) {
    if (p == 0)
        return 1;
    else
        return n * pow(n, p - 1);
}
int main() {
    int n, p, ans;

    cout << "Enter the number and power=";
    cin >> n >> p;
    ans = pow(n, p);

    cout << "The Required Answer is " << ans;
}