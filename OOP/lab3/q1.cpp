// 1. WAP to create a class Teacher with data members teacher_id, teacher_name, department and subject_taught and create member functions for reading and displaying data members. At least one of the member function should be defined outside the class.

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    int teacher_id;
    string teacher_name, department, subject_taught;

public:
    void data_entry()
    {
        cout << "Enter teacher ID: ";
        cin >> teacher_id;
        cout << "Enter teacher name: ";
        getline(cin >> ws, teacher_name);
        cout << "Enter department: ";
        getline(cin >> ws, department);
        cout << "Enter subject taught: ";
        getline(cin >> ws, subject_taught);
    }
    void data_display();
};
void Teacher::data_display()
{
    cout << "Teacher ID is : " << teacher_id << endl;
    cout << "Teacher name is : " << teacher_name << endl;
    cout << "Department is : " << department << endl;
    cout << "Subject taught is : " << subject_taught << endl;
}

int main()
{
    Teacher T1;
    T1.data_entry();
    T1.data_display();
    return 0;
}

/*
SAMPLE OUTPUT:

Enter teacher ID: 2
Enter teacher name: Ram Prasad
Enter department: Information Technology
Enter subject taught: Digital Logic
Teacher ID is : 2
Teacher name is : Ram Prasad
Department is : Information Technology
Subject taught is : Digital Logic
*/
