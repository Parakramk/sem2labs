/*
4. Create a C++ program that simulates a banking system. Define a class
called BankAccount with private member variables accountNumber,
balance, and a static member variable totalAccounts to keep track of the
total number of bank accounts created. Implement the following
functionalities:
i. A constructor that initializes the accountNumber and balance variables
and increments the totalAccounts count.
ii. A member function deposit() that takes an amount as input and adds it
to the balance of the account.
iii. A member function withdraw() that takes an amount as input and
subtracts it from the balance, only if the balance is sufficient.
iv. A static member function getTotalAccounts() that returns the total
number of bank accounts created.
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    static int totalAccounts;
    string accountNumber;
    double balance;

public:
    BankAccount(string accnum, double money) {
        accountNumber = accnum;
        balance = money;
        totalAccounts++;
    }

    void withdraw() {
        double money;
        cout << "Enter the amount you want to withdraw:" << endl;
        cin >> money;
        if (balance >= money) {
            balance -= money;
            cout << "Your total balance is: " << balance << endl;
        }
        else {
            cout << "You have insufficient balance!" << endl;
        }
    }

    void deposit() {
        double amount;
        cout << "Enter the amount you want to deposit:" << endl;
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". Your total balance is: " << balance << endl;
        }
        else {
            cout << "Invalid amount for deposit!" << endl;
        }
    }

    static int getTotalAccounts() {
        return totalAccounts;
    }
};

int BankAccount::totalAccounts = 0; // Set Total Accounts to Zero

int main() {
    BankAccount Acc1("12AB", 100.00);
    BankAccount Acc2("23C", 200.00);
    BankAccount Acc3("342A", 300.00);
    BankAccount Acc4("413X", 400.00);

    Acc1.deposit();
    Acc1.withdraw();
    cout << "Total number of accounts: " << BankAccount::getTotalAccounts() << endl;

    return 0;
}

/*
SAMPLE OUTPUT
Enter the amount you want to deposit:
800
Deposited 800. Your total balance is: 900
Enter the amount you want to withdraw:
90
Your total balance is: 810
Total number of accounts: 4
*/
