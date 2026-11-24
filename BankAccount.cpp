//
// Created by Christopher Vaughn on 11/24/26.
//

#include "BankAccount.h"

Transaction::Transaction(TransactionType type, double amount, string timeStamp, string memo) {
    this->type = type;
    this->amount = amount;
    this->timestamp = timeStamp;
    this->memo = memo;
    }
void Transaction::print() {
        cout << this->type << " " << this->amount << " " << this->timestamp << " " << this->memo << endl;
    }
void Transaction::setMemo(string memo) {
        this->memo = memo;
    }
string Transaction::getMemo() {
    return this->memo;
}
double Transaction::getAmount() {
    return this->amount;
}
string Transaction::getTimestamp() {
    return this->timestamp;
}

BankAccount::BankAccount(string id, double balance) {
    this->id = id;
    this->balance = balance;
}
string BankAccount::getId() {
    return this->id;
}
double BankAccount::getBalance() {
    return this->balance;
}
void BankAccount::print() {
    cout << this->id << " " << this->balance << endl;
    for (auto item : this->transactions) {
        cout << item.getTimestamp() << " " << item.getAmount() << endl;
    }
}

void BankAccount::deposit(double amount) {
    Transaction transaction(TransactionType::Deposit, amount, "11/11/2026","");
    this->balance += amount;
    this->transactions.push_back(transaction);
}
void BankAccount::withdraw(double amount) {
    Transaction transaction(TransactionType::Withdraw, amount, "11/11/2026","");
    this->balance -= amount;
    this->transactions.push_back(transaction);
}
