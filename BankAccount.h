//
// Created by Christopher Vaughn on 11/24/26.
//

#ifndef BANK_ACCOUNTS_BANKACCOUNT_H
#define BANK_ACCOUNTS_BANKACCOUNT_H
#include <iostream>
#include <vector>
using namespace std;
enum TransactionType{Withdraw, Deposit, Transfer, Overdraft, Other};
class Transaction {
public:
    Transaction(TransactionType, double, std::string, std::string);
    string getMemo();
    void setMemo(string);
    double getAmount();
    string getTimestamp();
    void print();

private:
    string timestamp = "";
    TransactionType type = Other;
    double amount = 0;
    string memo = "";
};

class BankAccount {
public:
    BankAccount(string, double);
    string getId();
    void deposit(double);
    void withdraw(double);
    void print();
    double getBalance();
    bool operator>(const BankAccount& other) {
        if (this->balance > other.balance) {
            return true;
        }else{
            return false;
        }
    }
private:
    double balance;
    string id;
    vector<Transaction> transactions;
};



#endif //BANK_ACCOUNTS_BANKACCOUNT_H
