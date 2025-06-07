#include <iostream>
#include "LiaBankSys.h"

void BankSystem::addAccount(const std::string& name, int number, double balance) {
    accounts.push_back(BankAccount(name, number, balance));
}

BankAccount* BankSystem::findAccount(int number) {
    for (auto& account : accounts) {
        if (account.getnumber() == number) {
            return &account;
        }
    }
    std::cout << "Account number" << number << " not found.\n";
    return nullptr;
}

void BankSystem::transferFunds(int senderAcc, int receiverAcc, double amount) {
    BankAccount* sender = findAccount(senderAcc);
    BankAccount* receiver = findAccount(receiverAcc);

    if (sender && receiver) {
        if (sender->withdraw(amount)) {
            receiver->deposit(amount);
            std::cout << "Transfer successful.\n";
        }
    }
}

void BankSystem::displayAllAccounts() const {
    for (const auto& acc : accounts) {
        acc.display();
    }
}
