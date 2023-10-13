/*JOIN OPERATION
*/
#include<iostream>
using namespace std;
int main() {
    int a[3][3], b[3][3], AvB[3][3];
    cout << "Enter the elements of 3x3 matrix A" << endl;
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of 3x3 matrix B" << endl;
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cin >> b[i][j];
        }
    }
    cout << "THE JOIN OPERATION OF THESE TWO MATRICES IS" << endl;
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            AvB[i][j] = a[i][j] || b[i][j];
            cout << AvB[i][j] << "\t";
        }
        cout << "\n";
    }

}