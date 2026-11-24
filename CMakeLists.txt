cmake_minimum_required(VERSION 4.3)
project(Bank_Accounts)

set(CMAKE_CXX_STANDARD 20)

add_executable(Bank_Accounts main.cpp
        BankAccount.cpp
        BankAccount.h)
