#include "LiaBankSys.h"

int main() {
    BankSystem bank;

    bank.addAccount("Jojo Solo", 01, 123000);
    bank.addAccount("Niko Palo", 02, 550000);

    bank.displayAllAccounts();

    bank.findAccount(01)->deposit(100000);
    bank.findAccount(02)->withdraw(15000);

    bank.transferFunds(02, 01, 100);

    bank.displayAllAccounts();

    return 0;
}
