#ifndef LIABANK_H
#define LIABANK_H

#include <string>

class BankAccount {
private:
    std::string holder;
    int number;
    double balance;

public:
    BankAccount() : holder("Unknown"), number(0), balance(0.0) {}

    BankAccount(std::string holder, int number, double balance)
        : holder(holder), number(number), balance(balance) {}

   BankAccount(std::string holder, int number)
        : holder(holder), number(number), balance(0.0) {}

    BankAccount(const BankAccount& other)
        : holder(other.holder), number(other.number), balance(other.balance) {}

   ~BankAccount() {
        std::cout << "Account " << number << " of " << holder << " is not valid.\n";
    }

    void deposit(double amount);
    bool withdraw(double amount);
    void display() const;

    int getnumber() const;
    double getBalance() const;
    void setBalance(double newBalance);
};

#endif //LIABANK_H
