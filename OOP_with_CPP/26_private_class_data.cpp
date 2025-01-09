#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}
    int getAccountDetails() { return accountNumber; }
    double getBalanceDetails() { return balance; }
};

class SavingsAccount : private BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(int accNum, double bal, double intRate) : BankAccount(accNum, bal), interestRate(intRate) {}
    void display() {
        cout << "Account Number: " << getAccountDetails() << endl;
        cout << "Balance: " << getBalanceDetails() << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    SavingsAccount sa(903, 5000, 5);
    sa.display();
    return 0;
}

/*
Account Number: 903
Balance: 5000
Interest Rate: 5%
*/