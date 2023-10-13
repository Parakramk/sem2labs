/*
WAP TO PRINT TRUTH TABLE OF CONJUNCTION
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Truth Table of Conjunction (AND):" << endl;
    cout << "A\tB\tA n B" << endl;

    // Loop over all possible combinations of A and B (0 or 1)
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            int result = A && B;
            cout << A << '\t' << B << '\t' << result << '\n';
        }
    }
    return 0;
}

