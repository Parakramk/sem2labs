/*
WAP TO PRINT TRUTH TABLE OF NEGETION
*/
#include<iostream>
using namespace std;

int main() {
    cout << "A\tNOT A" << endl;
    for (int A = 0; A <= 1;A++) {
        cout << A << "\t" << !A << endl;
    }
    return 0;
}