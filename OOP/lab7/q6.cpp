/*
6. You have a BankAccount base class, and your objective is to implement
constructors and a destructor in it. Additionally, you'll derive a specialized
SavingsAccount class from the base class.
BankAccount Class:
• Create a base class named BankAccount with attributes
accountNumber (string): Account number and balance (double):
Account balance.
• Implement a parameterized constructor to initialize attributes and
implement a destructor displaying "Bank account with account
number [accountNumber] is being closed." SavingsAccount
Class:
• Derive SavingsAccount from BankAccount and add an attribute
interestRate (double): Annual interest rate.
• Implement a parameterized constructor to initialize attributes.
Write a C++ program that:
a. Creates instances of SavingsAccount and sets attributes.
b. Demonstrates the behavior of constructors and the destructor during
object creation and destruction.
*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    string accountNumber;
    double balance;

public:
    BankAccount(const string accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
        cout << "Bank account with account number " << accountNumber << " is created." << endl;
    }

    ~BankAccount() {
        cout << "Bank account with account number " << accountNumber << " is being closed." << endl;
    }
};

// Derived class SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(const string accNumber, double initialBalance, double rate) : BankAccount(accNumber, initialBalance) {
        interestRate = rate;
        cout << "Savings account with account number " << accountNumber << " is created." << endl;
    }

    ~SavingsAccount() {
        cout << "Savings account with account number " << accountNumber << " is being closed." << endl;
    }
};

int main() {

    SavingsAccount savings1("SAV1", 1000.0, 0.5);
    SavingsAccount savings2("SAV2", 5000.0, 0.9);

    return 0;
}

/*
SAMPLE OUTPUT:
Bank account with account number SAV1 is created.
Savings account with account number SAV1 is created.
Savings account with account number SAV1 is being closed.
Bank account with account number SAV1 is being closed.
*/
