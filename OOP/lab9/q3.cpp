#include<iostream>
#include<string>
using namespace std;

class Account;

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
    friend double processTransaction(Account& acc, const Transaction& t);
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
    string getAccountNumber() {
        return accountNumber;
    }
    string getAccountHolder() {
        return accountHolder;
    }
    double getBalance() {
        return balance;
    }

    // void displayInfo() const {
    //     cout << "Account Number: " << accountNumber << endl;
    //     cout << "Account Holder: " << accountHolder << endl;
    //     cout << "Balance: " << balance << endl;
    // }

    friend double processTransaction(Account& acc, const Transaction& t);
};

double processTransaction(Account& acc, const Transaction& trans) {
    if (acc.accountNumber == trans.accountNumber) {
        if (trans.transactionType == 'D' || trans.transactionType == 'd') {
            (trans.amount > 0) ? (acc.balance += trans.amount, cout << "Deposit Succesful" << endl) : cout << "Invalid amount for deposit!" << endl;
        }
        else if (trans.transactionType == 'W' || trans.transactionType == 'w') {
            (acc.balance > trans.amount) ? (acc.balance -= trans.amount, cout << "Withdrawal successful." << endl) : cout << "Insufficient balance!" << endl;
        }
        else {
            cout << "Invalid Transaction Type" << endl;
        }
        return acc.balance;
    }
    else {
        // cout << "Account Number doesn't Match, Invalid Transaction" << endl;
        return 0.0;
    }
}

int main() {
    Account Acc("Acc1", "ABC XYZ", 900);
    cout << "Account Holder: " << Acc.getAccountHolder() << endl;
    cout << "Account Number: " << Acc.getAccountNumber() << endl;
    cout << "Initial Balance: " << Acc.getBalance() << endl;

    Transaction deposit("Acc", 'D', 1000.0);
    Transaction withdrawal("Acc1", 'W', 500.0);

    double updatedBalance = processTransaction(Acc, deposit);
    (updatedBalance != 0) ? (cout << "Updated Balance after Deposit: " << updatedBalance << endl) : cout << "Account Number doesn't Match, Invalid Transaction" << endl;


    updatedBalance = processTransaction(Acc, withdrawal);
    (updatedBalance != 0) ? (cout << "Updated Balance after Withdrawl: " << updatedBalance << endl) : cout << "Account Number doesn't Match, Invalid Transaction" << endl;

    return 0;
}


/*
OUTPUT:
Account Holder: ABC XYZ
Account Number: Acc1
Initial Balance: 900
Account Number doesn't Match, Invalid Transaction
Withdrawal successful.
Updated Balance after Withdrawl: 400
*/