/*
Bank Account Class with Deposit and Withdraw

Write a C++ program to implement a class called BankAccount that
has private member variables for account number and balance.
Include member functions to deposit and withdraw money from the
account.
 */

#include <iostream>
using namespace std;

class BankAccount {
  private:
    int number, balance;

  public:
    void setAccount(int id, int amount) {
        number  = id;
        balance = amount;
    }
    void deposite(int amount) {
        balance += amount;
        cout << "You added " << amount << " tk" << endl;
    }
    void withdraw(int amount) {
        if (amount > balance) {
            balance = 0;
            cout << "You received " << amount << " tk" << endl;
        } else {
            balance -= amount;
            cout << "You received " << amount << " tk" << endl;
        }
    }
};
int main() {
    BankAccount jaber;
    jaber.setAccount(70002, 123454);
    jaber.deposite(90000);
    jaber.withdraw(213);

    return 0;
};
