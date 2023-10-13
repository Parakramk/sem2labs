#include<iostream>
using namespace std;
int main() {
    cout << "TRUTH TABLE of COntradiction: (PvQ)^(!P^!Q)" << endl;
    cout << "P\tQ\t(PvQ)^(TP^TQ)" << endl;
    for (int i = 0;i <= 1;i++) {
        for (int j = 0;j <= 1;j++) {
            int k = !i && !j;
            int m = i || j;
            int n = m && k;
            cout << i << "\t" << j << "\t" << n << endl;
        }
    }
}