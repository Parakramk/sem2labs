/*
5. Develop a C++ program to exemplify multipath inheritance within a
software development context. The scenario involves four classes:
Employee, Programmer, Manager, and TeamMember.
Employee Class:
• Base class Employee with a protected attribute employeeID and
method displayEmployeeInfo() shows the employee's ID.
Programmer Class:
• Derived from Employee, introduces programmingLanguage
attribute and method displayLanguage() displays the
programming language.
Manager Class:
• Derived from Employee, introduces department attribute and
method displayDepartment() shows the managed department.
TeamMember Class:
• Derived from both Programmer and Manager, inheriting
attributes and method displayTeamInfo() calls methods from
base classes.
Design a program that:
a. Creates a TeamMember instance, configures attributes and demonstrates
ambiguity arising from multipath inheritance in method calls.
b. Resolves ambiguity using scope resolution to access specific base class
methods and explain how multipath inheritance ambiguity is tackled
with scope resolution.
*/
#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int employeeId;

public:
    Employee(int id) {
        employeeId = id;
    }

    void displayEmployeeInfo() const {
        cout << "Employee ID is: " << employeeId << endl;
    }
};

class Programmer : public Employee {
protected:
    string programmingLanguage;

public:
    Programmer(int id, const string lang) : Employee(id) {
        programmingLanguage = lang;
    }

    void displayLanguage() const {
        cout << "Programming Language is: " << programmingLanguage << endl;
    }
};

class Manager : public Employee {
protected:
    string department;

public:
    Manager(int id, const string dept) : Employee(id) {
        department = dept;
    }
    void displayDepartment() const {
        cout << "Department is: " << department << endl;
    }
};

class TeamMember : public Programmer, public Manager {
public:
    TeamMember(int id, const string language, const string depart) : Programmer(id, language), Manager(id, depart) {
    }

    void displayTeamInfo() const {
        Programmer::displayEmployeeInfo();
        // Manager::displayEmployeeInfo();
        displayLanguage();
        displayDepartment();
    }
};

int main() {
    TeamMember teamMember(178, "Python", "CSIT");

    cout << "Team Member Details:" << endl;
    teamMember.displayTeamInfo();

    return 0;
}

/*
SAMPLE OUTPUT:
Team Member Details:
Employee ID is: 178
Programming Language is: Python
Department is: CSIT
*/
