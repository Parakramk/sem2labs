/*
Program to Find Union & Intersection of Sets using C++
*/
#include<iostream>
using namespace std;

void findUnion(int A[], int B[], int n1, int n2) {
    int U[10], flag, k = 0;
    for (int i = 0;i < n1;i++) {
        U[i] = A[i];
        k++;
    }
    for (int i = 0;i < n2;i++) {
        flag = 1;
        for (int j = 0;j < n1;j++) {
            if (B[i] == A[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            U[k] = B[i];
            k++;
        }
    }
    cout << "Tne Union of Sets is:" << endl;
    for (int i = 0;i < k;i++) {
        cout << U[i] << "\t";
    }
    cout << endl;
}


void findIntersection(int A[], int B[], int n1, int n2) {
    int I[10], flag, k = 0;
    for (int i = 0;i < n2;i++) {
        flag = 1;
        for (int j = 0;j < n1;j++) {
            if (B[i] == A[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            I[k] = B[i];
            k++;
        }
    }
    cout << "Tne Intersection of Sets is:" << endl;
    for (int i = 0;i < k;i++) {
        cout << I[i] << "\t";
    }
    cout << endl;
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

    findUnion(A, B, n1, n2);
    findIntersection(A, B, n1, n2);

    return 0;
}