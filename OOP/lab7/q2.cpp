/*
2. Create a C++ program involving classes Person, Faculty, and Staff. The
base class Person contains private attributes name and age. The derived
Faculty class adds a protected attribute department and overrides
displayInfo() to include name, age, and department. Similarly, the derived
Staff class adds a protected attribute position and overrides displayInfo()
with name, age, and position.Write a program that creates instances of
Faculty and Staff,sets their attributes and calls displayInfo() for both
instances. Observe data member and member function overriding during
compilation and execution.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void input() {
        cout << "Enter your name: ";
        getline(cin >> ws, name);
        cout << "Enter your age: ";
        cin >> age;
    }
    void displayInfo() {
        cout << "Your name is: " << name << endl
            << "Your age is: " << age << endl;
    }
};

class Faculty : public Person {
protected:
    string department;

public:
    void input() {
        cout << "Enter your name: ";
        getline(cin >> ws, name);
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter department: ";
        cin >> department;
    }

    void displayInfo() {
        cout << "Your name is: " << name << endl
            << "Your age is: " << age << endl
            << "Department :" << department << endl;
    }
};

class Staff : public Person {
protected:
    string Position;

public:
    void input() {
        cout << "Enter your name: ";
        getline(cin >> ws, name);
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter Position: ";
        cin >> Position;
    }

    void displayInfo() {
        cout << "Your name is: " << name << endl
            << "Your age is: " << age << endl;
        cout << "Position:" << Position << endl;
    }
};

int main() {
    Faculty fac;
    Staff stf;
    fac.input();
    fac.displayInfo();
    stf.input();
    stf.displayInfo();
    return 0;
}

/*
SAMPLE OUTPUT:
Enter your name: xyz abc
Enter your age: 12
Enter department: CSIT
Your name is: xyz abc
Your age is: 12
Department :CSIT
Enter your name: Mad Lad
Enter your age: 88
Enter Position: CEO
Your name is: Mad Lad
Your age is: 88
Position:CEO
*/