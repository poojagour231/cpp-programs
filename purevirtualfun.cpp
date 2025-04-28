#include <iostream>
using namespace std;

// Abstract base class
class Account {
protected:
    double balance;

public:
    Account(double bal) : balance(bal) {}

    // Pure virtual function
    virtual void calculateInterest() = 0;

    void showBalance() {
        cout << "Balance: ₹" << balance << endl;
    }
};

// Derived class - SavingsAccount
class SavingsAccount : public Account {
public:
    SavingsAccount(double bal) : Account(bal) {}

    void calculateInterest() override {
        double interest = balance * 0.04;  // 4% interest
        cout << "Savings Account Interest: ₹" << interest << endl;
    }
};

// Derived class - CurrentAccount
class CurrentAccount : public Account {
public:
    CurrentAccount(double bal) : Account(bal) {}

    void calculateInterest() override {
        cout << "Current Accounts do not earn interest." << endl;
    }
};

int main() {
    Account* acc;

    SavingsAccount sa(5000);
    CurrentAccount ca(8000);

    cout << "--- Savings Account ---" << endl;
    acc = &sa;
    acc->showBalance();
    acc->calculateInterest();

    cout << "\n--- Current Account ---" << endl;
    acc = &ca;
    acc->showBalance();
    acc->calculateInterest();

    return 0;
}
