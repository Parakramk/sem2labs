/*
3. Write a program to access the overridden data members and member
functions of question number 2 by the help of a member function of a
derived class and also by the help of a derived class object.
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
        Person::input();
        cout << "Enter department: ";
        cin >> department;
    }

    void displayInfo() {
        Person::displayInfo();
        cout << "Department :" << department << endl;
    }
};

class Staff : public Person {
protected:
    string Position;

public:
    void input() {
        Person::input();
        cout << "Enter Position: ";
        cin >> Position;
    }
    void displayInfo() {
        Person::displayInfo();
        cout << "Position: " << Position << endl;
    }
};

int main() {
    Faculty F;
    Staff S;
    F.input();
    F.displayInfo();
    F.Person::input();
    F.Person::displayInfo();
    S.input();
    S.displayInfo();
    S.Person::input();
    S.Person::displayInfo();
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
Enter your name: abc xyz
Enter your age: 88
Your name is: abc xyz
Your age is: 88
Enter your name: mad lad
Enter your age: 67
Enter Position: Manager
Your name is: mad lad
Your age is: 67
Position: Manager
Enter your name: lad mad
Enter your age: 22
Your name is: lad mad
Your age is: 22
*/