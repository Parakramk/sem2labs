/*
3. Develop a simple Banking System with two classes: Account and
Transaction. The Account class represents bank accounts, including private
data members for accountNumber, accountHolder, and balance, along with
public member functions for initialization and data retrieval. The Transaction
class handles individual transactions, containing private data members
accountNumber, transactionType, and amount, and a constructor for
transaction setup. Your task is to create a Friend function named
processTransaction that links the Account and Transaction classes. This
function should update the account balance based on the transaction type
(deposit or withdrawal) and return the updated account balance. Implement
the classes and function in C++ and demonstrate the banking system's
functionality with appropriate test cases
*/

#include<iostream>
#include<string>

using namespace std;

class Account; // Forward declaration of Account class

class Transaction {
private:
    string accountNumber;
    char transactionType; // Use 'D' to deposit & 'W' to withdraw
    double amount;

public:
    Transaction(const string& accNum, char tType, double amt) {
        accountNumber = accNum;
        transactionType = tType;
        amount = amt;
    }

    friend void processTransaction(Account& acc, const Transaction& t);
};
class Account {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    Account(const string& accNum, const string& accHolder, double bal) {
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = bal;
    }

    void displayInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    void displayBalance() {
        cout << "Hello " << accountHolder << "! Your updated balance is: " << balance << endl;
    }

    friend void processTransaction(Account& acc, const Transaction& t);
};

void processTransaction(Account& acc, const Transaction& trans) {
    if (acc.accountNumber == trans.accountNumber) {
        if (trans.transactionType == 'D' || trans.transactionType == 'd') {
            (trans.amount > 0) ? (acc.balance += trans.amount, cout << "Deposit Succesful" << endl) : cout << "Invalid amount for deposit!" << endl;
        }
        else if (trans.transactionType == 'W' || trans.transactionType == 'w') {
            (acc.balance >= trans.amount) ? (acc.balance -= trans.amount, cout << "Withdrawal successful." << endl) : cout << "Insufficient balance!" << endl;
        }
        else {
            cout << "Invalid Transaction Type" << endl;
        }
    }
    else {https://pastefy.app/yrgbL3vs
        cout << "Account Number doesn't Match, Invalid Transaction" << endl;
    }

}

int main() {
    Account Acc("Acc1", "ABC XYZ", 900);
    Acc.displayInfo();

    Transaction deposit("Acc", 'D', 1000.0);
    Transaction withdrawal("Acc1", 'W', 500.0);

    processTransaction(Acc, deposit);
    Acc.displayBalance();

    processTransaction(Acc, withdrawal);
    Acc.displayBalance();

    return 0;
}
/*
SAMPLE OUTPUT:
Account Number: Acc1
Account Holder: ABC XYZ
Balance: 900
Account Number doesn't Match, Invalid Transaction
Hello ABC XYZ! Your updated balance is: 900
Withdrawal successful.
Hello ABC XYZ! Your updated balance is: 400
*/