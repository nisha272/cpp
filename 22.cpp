#include <iostream>
using namespace std;

class Account {
private:
    int acc_number;   // Private: cannot be accessed directly outside the class

protected:
    double balance;   // Protected: accessible in derived classes

public:
    string name;      // Public: accessible anywhere

    // Constructor
    Account(int acc_no, string acc_name, double bal) {
        acc_number = acc_no;
        name = acc_name;
        balance = bal;
    }

    // Public function to access account number (read-only)
    int getAccountNumber() {
        return acc_number;
    }

    // Public function to get balance
    double getBalance() {
        return balance;
    }

    // Public function to modify balance safely
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Display details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create object
    Account acc1(101, "Rahul", 5000);

    // Access public member
    cout << "Account Holder: " << acc1.name << endl;

    // Access private member via public function
    cout << "Account Number: " << acc1.getAccountNumber() << endl;
    acc1.deposit(2000);
    acc1.withdraw(1000);
    acc1.display();

    return 0;
}