/*
WAP TO SHOW DIFFERENCE OF TWO SETS
*/
#include<iostream>
using namespace std;

void findDiffA(int A[], int B[], int n1, int n2) {
    int D1[10], flag, k = 0;
    for (int i = 0;i < n1;i++) {
        flag = 1;
        for (int j = 0;j < n2;j++) {
            if (A[i] == B[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            D1[k] = A[i];
            k++;
        }
    }
    cout << "Tne Difference of Sets(A-B) is:" << endl;
    for (int i = 0;i < k;i++) {
        cout << D1[i] << "\t";
    }
    cout << endl;
}

void findDiffB(int A[], int B[], int n1, int n2) {
    int D1[10], flag, k = 0;
    for (int i = 0;i < n2;i++) {
        flag = 1;
        for (int j = 0;j < n1;j++) {
            if (B[i] == A[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            D1[k] = B[i];
            k++;
        }
    }
    cout << "Tne Difference of Sets(B-A) is:" << endl;
    for (int i = 0;i < k;i++) {
        cout << D1[i] << "\t";
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
    findDiffA(A, B, n1, n2);
    findDiffB(A, B, n1, n2);

    return 0;
}