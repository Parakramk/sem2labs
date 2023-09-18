/*
WAP to show the destructor call such that it prints the message “memory is released”.
*/

#include <iostream>
using namespace std;

class desdemo {
public:
    desdemo() {
        cout << "Constructor called" << endl;
    }

    ~desdemo() {
        cout << "Memory is released" << endl;
    }
};

int main() {
    cout << "Creating an object" << endl;
    desdemo obj;

    cout << "Object is going out of Scope" << endl;
    // Destructor will be called automatically when the object goes out of scope
    return 0;
}

/*
SAMPLE OUTPUT:
Creating an object
Constructor called
Object is going out of Scope
Memory is released
*/
