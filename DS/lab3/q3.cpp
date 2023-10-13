/*
WAP TO PRINT TABLE OF DISJUCTION
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Truth Table of Disjunction (OR):" << endl;
    cout << "A\tB\tA v B" << endl;

    // Loop over all possible combinations of A and B (0 or 1)
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            int result = A || B;
            cout << A << '\t' << B << '\t' << result << '\n';
        }
    }
    return 0;
}

/*
OUTPUT:
Truth Table of Disjunction (OR):
A       B       A v B
0       0       0
0       1       1
1       0       1
1       1       1
*/