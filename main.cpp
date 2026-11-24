#include <iostream>
#include "BankAccount.h"


int main() {
    BankAccount bankAccount("001", 122.54);
    BankAccount bankAccount2("011", 200.54);
    cout << (bankAccount > bankAccount2) << endl;
    bankAccount.print();
    bankAccount.deposit(100.00);
    bankAccount.print();
    bankAccount.withdraw(80.00);
    bankAccount.print();

    return 0;
}
