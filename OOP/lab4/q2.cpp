/*
2. Write a program to implement Pointer to object and member access.
*/
#include <iostream>
using namespace std;

class pointer {
private:
    int marks_in_C, marks_in_CPP;

public:
    void input() {
        cout << "Enter marks in C and C++." << endl;
        cin >> marks_in_C >> marks_in_CPP;
    }

    float average() {
        return (float(marks_in_C) + marks_in_CPP) / 2;
    }
};

int main() {
    pointer* P, object;
    P = &object;
    (*P).input();
    cout << "The average is: " << P->average() << endl;
    return 0;
}

/*
SAMPLE OUTPUT:
Enter marks in C and C++.
55
56
The average is: 55.5
*/
