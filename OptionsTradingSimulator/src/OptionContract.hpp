//
//  OptionContract.hpp
//  OptionsTradingSimulator
//
//  Created by Jackson Webster on 4/5/23.
//

#ifndef OPTIONCONTRACT_HPP
#define OPTIONCONTRACT_HPP

#include <string>

class OptionContract {
public:
    OptionContract(std::string ticker, std::string type, double strikePrice, double expirationDate);

    std::string getTicker() const;
    std::string getType() const;
    double getStrikePrice() const;
    double getExpirationDate() const;

private:
    std::string m_ticker;
    std::string m_type;
    double m_strikePrice;
    double m_expirationDate;
};

#endif // OPTIONCONTRACT_HPP

