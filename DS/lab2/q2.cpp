/*
WAP TO FIND CARTESIAN PRODUCT OF TWO SETS
*/
#include<iostream>
using namespace std;

void cartesian(int A[], int B[], int n1, int n2) {
    cout << "The Cartesian Products of two sets AxB:" << endl;
    cout << "{";
    for (int i = 0;i < n1;i++) {
        for (int j = 0;j < n2;j++) {
            cout << "(" << A[i] << "," << B[j] << "),";
        }
    }
    cout << "}" << endl;

    cout << "The Cartesian Products of two sets BxA:" << endl;
    cout << "{";
    for (int i = 0;i < n2;i++) {
        for (int j = 0;j < n1;j++) {
            cout << "(" << B[i] << "," << A[j] << "),";
        }
    }
    cout << "}" << endl;
}


int main() {
    int A[10], B[10], n1, n2;

    cout << "Enter the number of Elements of the First set(A): ";
    cin >> n1;
    cout << "Enter the Element of Set A: " << endl;
    for (int i = 0;i < n1;i++) {
        cin >> A[i];
    }

    cout << "Enter the number of Elements of the Second set(B): ";
    cin >> n2;
    cout << "Enter the Element of Set B:" << endl;
    for (int i = 0;i < n2;i++) {
        cin >> B[i];
    }
    cartesian(A, B, n1, n2);


    return 0;
}