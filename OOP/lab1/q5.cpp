/*
5. WAP to implement dynamic memory allocation with new and delete
operators (for both simple variable and array variable).
*/
#include <iostream>

using namespace std;

int main() {
    int* pInt = new int;

    *pInt = 10;
    cout << *pInt << endl;
    delete pInt;

    cout << endl << "array:" << endl;
    int* arr = new int[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr;

    return 0;
}
/*
OUTPUT:
10

array:
0
1
2
*/