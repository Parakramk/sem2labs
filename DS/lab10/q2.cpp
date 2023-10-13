#include <iostream>
using namespace std;

int main() {
    int A[10], m;
    cout << "Enter the number of elements in set A: ";
    cin >> m;
    cout << "Enter " << m << " elements in set A: ";
    for (int i = 0; i < m; i++)
        cin >> A[i];

    bool reflexive = true;
    bool relation[10][10] = {};

    cout << "Enter pairs (a b) representing relation R (terminate with -1 -1):" << endl;

    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == -1 || b == -1)
            break;
        if (a < 1 || a > m || b < 1 || b > m) {
            cout << "Invalid input. Elements must be in [1, " << m << "]." << endl;
        }
        else {
            relation[a - 1][b - 1] = true;
        }
    }

    for (int i = 0; i < m; i++) {
        if (!relation[i][i]) {
            reflexive = false;
            break;
        }
    }

    cout << "R is " << (reflexive ? "reflexive" : "irreflexive") << "." << endl;
    return 0;
}
/*
OUTPUT:
Enter the number of elements in set A: 3
Enter 3 elements in set A: 1 2 3
Enter pairs (a b) representing relation R (terminate with -1 -1):
1 1
2 2
3 3
-1 -1
R is reflexive.
*/