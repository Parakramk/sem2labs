/*
Define a structure called BankAccount to represent a bank account with
attributes such as account number, account holder name, and account
balance. Include methods to deposit and withdraw money from the
account. In the main function, create an instance of the BankAccount
structure, prompt the user for account details and initial balance, perform
a deposit, perform a withdrawal, and print the updated account balance.
*/

#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
    private:
        string AccountNumber, AccountHolderName;
        double Balance;
    public:
        void CreateAccount()
        {
            cout << "Enter account number: ";
            cin >> AccountNumber;
            cout << "Enter the name of account holder: ";
            getline(cin>>ws,AccountHolderName);
            cout << "Set initial balance: ";
            cin >> Balance;
        }
        void deposit()
        {
            double money;
            cout << "Enter the amount you want to deposit:"<<endl;
            cin>>money;
            Balance = Balance + money;
            // cout << "Your total balance is: " << Balance << endl;
        }
        void withdraw()
        {
            double money;
            cout << "Enter the amount you want to withdraw:" << endl;
            cin >> money;
            (Balance >= money) ? (Balance -= money, cout << "Withdrawal successful." << endl) : cout << "Insufficient balance!" << endl; //Evaluate if True else Print Error
            // (Balance >= money) ? (Balance -= money, cout << "Withdrawal successful. Your total balance is: " << Balance<< endl) : cout << "Insufficient balance!" << endl;
            //  Balance -= (Balance >= money) ? money : (cout << "Insufficient balance!" << endl);
        }

        void update()
        {
            cout << "Hello " << AccountHolderName << "! Your updated balance is: " << Balance << endl;
        }
};


int main()
{
    BankAccount Acc1;
    Acc1.CreateAccount();
    Acc1.deposit();
    Acc1.withdraw();
    Acc1.update();
    return 0;
}

/*
SAMPLE OUTPUT
Enter account number: A1V5
Enter the name of account holder: XYZ ABC
Set initial balance: 9000
Enter the amount you want to deposit:
9000
Enter the amount you want to withdraw:
600
Withdrawal successful.
Hello XYZ ABC! Your updated balance is: 17400
*/
