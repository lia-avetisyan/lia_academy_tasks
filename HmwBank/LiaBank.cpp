#include <iostream>
#include "LiaBank.h"


void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    } else {
        std::cout << "negative amount\n";
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        return true;
    } else {
        std::cout << "amount is more then balance.\n";
        return false;
    }
}

void BankAccount::display() const {
    std::cout << "Holder: " << holder << " Holder #: " << number
              << " Balance: $" << balance << "\n";
}

int BankAccount::getnumber() const {
    return number;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setBalance(double newBalance) {
    balance = newBalance;
}
