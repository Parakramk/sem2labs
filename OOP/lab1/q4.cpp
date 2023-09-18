/*
4. WAP to implement endl, setw, setprecision,fixed and scientific Manipulator.
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int a = 5;
    cout << setw(5) << a << endl;
    cout << setprecision(5) << 5.35065043 << endl;
    cout << fixed << 1.569 << endl;
    cout << scientific << 14.569043 << endl;
    return 0;
}

/*
OUTPUT:
    5
5.3507
1.56900
1.45690e+01
*/