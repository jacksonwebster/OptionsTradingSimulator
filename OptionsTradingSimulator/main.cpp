//
//  main.cpp
//  OptionsTradingSimulator
//
//  Created by Jackson Webster on 4/6/23.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include <cpprest/http_client.h>
#include <cpprest/json.h>

using namespace web;
using namespace web::http;
using namespace web::http::client;
using namespace web::json;



int main() {
    std::map<std::string, void (*)(const std::vector<std::string>&)> repl_functions;
    repl_functions["GET"] = get_options_contract;
}
