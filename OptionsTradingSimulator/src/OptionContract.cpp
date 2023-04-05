//
//  OptionsContract.cpp
//  OptionsTradingSimulator
//
//  Created by Jackson Webster on 4/5/23.
//

#include "OptionContract.hpp"

OptionContract::OptionContract(std::string ticker, std::string type, double strikePrice, double expirationDate) :
    m_ticker(ticker), m_type(type), m_strikePrice(strikePrice), m_expirationDate(expirationDate) {}

std::string OptionContract::getTicker() const {
    return m_ticker;
}

std::string OptionContract::getType() const {
    return m_type;
}

double OptionContract::getStrikePrice() const {
    return m_strikePrice;
}

double OptionContract::getExpirationDate() const {
    return m_expirationDate;
}
