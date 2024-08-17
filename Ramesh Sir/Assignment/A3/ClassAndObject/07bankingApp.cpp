// Write a program to create banking application to perform following using using class and
// object?
//     a) Initialize with initial balance Rs 3000
//     b) Deposit amount if balance is more than 1000 otherwise take Rs 100 as penalty for deposit
//     c) Withdraw amount if balance is more than 1000 otherwise alert user for low balance
//     d) check for balance

#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize the balance
    BankAccount(double initial_balance = 3000.0) : balance(initial_balance) {}

    // Method to deposit amount
    void deposit(double amount) {
        if (balance > 1000) {
            balance += amount;
            cout << "Amount deposited: Rs " << amount << endl;
        } else {
            balance += (amount - 100); // Deducting Rs 100 as penalty
            cout << "Balance is low, Rs 100 penalty applied. Amount deposited: Rs " << (amount - 100) << endl;
        }
    }

    // Method to withdraw amount
    void withdraw(double amount) {
        if (balance > 1000) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Amount withdrawn: Rs " << amount << endl;
            } else {
                cout << "Insufficient balance to withdraw Rs " << amount << endl;
            }
        } else {
            cout << "Low balance, cannot withdraw money." << endl;
        }
    }

    // Method to check balance
    double checkBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account; // Initialized with Rs 3000

    // Display initial balance
    cout << "Initial Balance: Rs " << account.checkBalance() << endl;

    // Perform deposit
    double depositAmount;
    cout << "\nEnter amount to deposit: Rs ";
    cin >> depositAmount;
    account.deposit(depositAmount);
    cout << "Current Balance: Rs " << account.checkBalance() << endl;

    // Perform withdraw
    double withdrawAmount;
    cout << "\nEnter amount to withdraw: Rs ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    cout << "Current Balance: Rs " << account.checkBalance() << endl;

    // Check final balance
    cout << "\nFinal Balance: Rs " << account.checkBalance() << endl;

    return 0;
}
