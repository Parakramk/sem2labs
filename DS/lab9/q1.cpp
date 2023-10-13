/*
1. Program to implement linear search algorithm using recursion
*/
#include<iostream>
using namespace std;
int linearsearch(int a[], int l, int r, int key) {
    if (r < l)
        return -1;
    if (a[l] == key)
        return l;
    return linearsearch(a, l + 1, r, key);
}

int main() {
    int a[7];
    int key;
    cout << "Enter the elements of the list:" << endl;
    for (int i = 0;i < 7;i++) {
        cin >> a[i];
    }
    cout << "Enter the key to be  searched:" << endl;
    cin >> key;
    int index = linearsearch(a, 0, 6, key);
    if (index != -1)
        cout << "The element " << key << " is present at Index " << index << endl;
    else
        cout << "The element is not present in the list." << endl;
    return 0;
}

/*
OUTPUT:
Enter the elements of the list:
7 2 6 8 44 5 1
Enter the key to be  searched:
6
The element 6 is present at Index 2
*/