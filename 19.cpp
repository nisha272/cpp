#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    void display() const {
        cout << "Account: " << accountNumber << " | Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAcc("ABC789", 1000.0);
    
    myAcc.display();
    myAcc.deposit(250.0);
    myAcc.withdraw(500.0);
    myAcc.display();

    return 0;
}

