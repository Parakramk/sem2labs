/*
FUZZY SET OPERATION
*/

#include<iostream>
using namespace std;

float max(float a, float b) {
    return (a >= b) ? a : b;
}
float min(float a, float b) {
    return (a < b) ? a : b;
}
double complement(double a) {
    return 1 - a;
}

int main() {
    double A[10], B[10];
    cout << "Enter the elements of Fuzzy Set A" << endl;
    for (int i = 0;i < 7;i++) {
        cin >> A[i];
    }
    cout << "Enter the elements of Fuzzy Set B" << endl;
    for (int i = 0;i < 7;i++) {
        cin >> B[i];
    }

    cout << "After Fuzzy Set Operation Union" << endl;
    cout << "A\tB\tUnion(A,B)" << endl;
    for (int i = 0;i < 7;i++) {
        cout << A[i] << "\t" << B[i] << "\t" << max(A[i], B[i]) << endl;
    }
    cout << endl;
    cout << "After Fuzzy Set Operation Intersection" << endl;
    cout << "A\tB\tIntersection(A,B)" << endl;
    for (int i = 0;i < 7;i++) {
        cout << A[i] << "\t" << B[i] << "\t" << min(A[i], B[i]) << endl;
    }
    cout << endl;
    cout << "After Fuzzy Set Operation Complement" << endl;
    cout << "A\tComplement(A)" << endl;
    for (int i = 0;i < 7;i++) {
        cout << A[i] << "\t" << complement(A[i]) << endl;
    }


    return 0;
}