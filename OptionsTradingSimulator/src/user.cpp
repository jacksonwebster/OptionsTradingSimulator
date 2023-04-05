//
//  user.cpp
//  OptionsTradingSimulator
//
//  Created by Jackson Webster on 4/5/23.
//

#include "user.hpp"

User::User(std::string name, double balance) {
    this->name = name;
    this->balance = balance;
}

std::string User::getName() {
    return this->name;
}

double User::getBalance() {
    return this->balance;
}

void User::setBalance(double newBalance) {
    this->balance = newBalance;
}

void User::addOptionContract(OptionContract* contract) {
    this->optionContracts.push_back(contract);
}

std::vector<OptionContract*> User::getOptionContracts() {
    return this->optionContracts;
}
