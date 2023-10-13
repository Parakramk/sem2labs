/*
WAP TO PRINT TRUTH TABLE OF IMPLICATIOn
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Truth Table of Implication:" << endl;
    cout << "p\tq\tp-->q" << endl;


    for (int i = 1; i >= 0; i--) {
        for (int j = 1; j >=0; j--) {
            int result = !i||j;
            cout << i<< '\t' << j << '\t' << result << '\n';
        }
    }
    return 0;
}
