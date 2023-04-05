//
//  user.hpp
//  OptionsTradingSimulator
//
//  Created by Jackson Webster on 4/5/23.
//

#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "OptionContract.hpp"

class User {
public:
    User(std::string name, double balance);
    std::string getName();
    double getBalance();
    void setBalance(double newBalance);
    void addOptionContract(OptionContract* contract);
    std::vector<OptionContract*> getOptionContracts();
private:
    std::string name;
    double balance;
    std::vector<OptionContract*> optionContracts;
};

#endif /* USER_H */
