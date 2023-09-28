/*
3. Write a C++ function called updateEmployeeSalary that takes a reference
parameter salary and increases it by a given percentage. In the main function,
prompt the user to enter an employee's current salary and the percentage
increase. Call the updateEmployeeSalary function, passing the entered salary
and percentage increase. The function should modify the salary by increasing
it based on the given percentage. Finally, print the original salary and the
updated salary to verify the changes.
*/

#include <iostream>
using namespace std;

void updateEmployeeSalary(double& salary, double percentageIncrease) {
    salary = salary + (salary * percentageIncrease / 100.0);
}

int main() {
    double salary;
    cout << "Enter the employee's current salary: ";
    cin >> salary;
    double percentageIncrease;
    cout << "Enter the percentage increase: ";
    cin >> percentageIncrease;

    double temp = salary;
    updateEmployeeSalary(salary, percentageIncrease);

    cout << endl;
    cout << "Original salary: " << temp << endl;
    cout << "Updated salary: " << salary << endl;

    return 0;
}
/*
OUTPUT:
Enter the employee's current salary: 20000
Enter the percentage increase: 5

Original salary: 20000
Updated salary: 21000
*/