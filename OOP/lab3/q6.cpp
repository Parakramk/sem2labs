/*
6. Write a program that manages an array of student objects. Each student object contains a name and age.
The program should prompt the user to enter the number of students and their respective names and ages.
Afterward, calculate and display the average age of all the students. Furthermore, find and print the name of the oldest student in the array.
Provide the code to implement this program, including the necessary class definition and the logic to calculate the average age
and find the oldest student.
*/
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    void Entry()
    {
        cout << endl
             << "Enter the name of student: ";
        getline(cin >> ws, name);
        cout << "Enter the age of student: ";
        cin >> age;
    }
    int data()
    {
        return age;
    }
    void max()
    {
        cout << name << " is the oldest with " << age << " age." << endl;
    }
};

int main()
{
    int num_stu, max, index = 0, sum = 0;
    cout << "Enter the number of student: ";
    cin >> num_stu;
    student S[30];
    for (int i = 0; i < num_stu; i++)
    {
        cout << endl
             << "Enter the data of " << i + 1 << " student.";
        S[i].Entry();
    }
    max = S[0].data();
    for (int i = 0; i < num_stu; i++)
    {
        if (max < S[i].data())
        {
            max = S[i].data();
            index = i;
        }
        sum = sum + S[i].data();
    }
    cout << endl
         << "The averave age is: " << sum / num_stu << endl
         << endl;
    S[index].max();
    return 0;
}

/*
SAMPLE OUTPUT:
Enter the number of student: 3

Enter the data of 1 student.
Enter the name of student: Roshan Lal
Enter the age of student: 20

Enter the data of 2 student.
Enter the name of student: Chandra Amit
Enter the age of student: 23

Enter the data of 3 student.
Enter the name of student: Ramesh Shankar
Enter the age of student: 25

The averave age is: 22

Ramesh Shankar is the oldest with 25 age
*/
