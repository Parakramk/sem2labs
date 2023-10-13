/*
WAP TO PRINT TRUTH TABLE OF TAUTOLOGY OPERATION: (p n q)->(p v q)
*/
#include <iostream>
using namespace std;

int main() {
    int orr, andd, result;
    cout << "Truth Table of Tautology Operation: (p n q)->(p v q):" << endl;
    cout << "p\tq\t(p n q)->(p v q)" << endl;


    for (int i = 1; i >= 0; i--) {
        for (int j = 1; j >= 0; j--) {
            andd = i && j;
            orr = i || j;
            result = !andd || orr;
            cout << i << '\t' << j << '\t' << result << '\n';
        }
    }
    return 0;
}
/*
OUTPUT:
Truth Table of Tautology Operation: (p n q)->(p v q):
p       q       (p n q)->(p v q)
1       1       1
1       0       1
0       1       1
0       0       1
*/