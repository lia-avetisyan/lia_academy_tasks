#ifndef LIABANKSYS_H
#define LIABANKSYS_H

#include <iostream>
#include <vector>
#include "LiaBank.h"


class BankSystem {
private:
    std::vector<BankAccount> accounts;

public:
    void addAccount(const std::string& name, int number, double balance);
    BankAccount* findAccount(int number);
    void transferFunds(int senderAcc, int receiverAcc, double amount);
    void displayAllAccounts() const;
};


#endif //LIABANKSYS_H
