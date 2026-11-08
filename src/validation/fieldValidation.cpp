#include <iostream>
#include "fieldValidation.h"
#include "helperFunctions.h"

bool validateContactName(const std::string& name) {
    if (name.empty()) {
        std::cout << "**Name is required.**\n";
        return false;
    }
    else if(name.size() > 50) {
        std::cout << "**Name is too long, max 50 characters allowed.**\n";
        return false;
    }
    return true;
}

bool validatePhoneNumber(const std::string& phone) {
    if (phone.empty()) {
        std::cout << "**Phone number is required.**\n";
        return false;
    }
    else if(phone.size() != 11) {
        std::cout << "**Phone number should contain 11 digits.**\n";
        return false;
    }
    else if(!isAllDigits(phone)) {
        std::cout << "**Phone number should contain only digits.**\n";
        return false;
    }
    else if(phone.at(0) != '0' || phone.at(1) != '1') {
        std::cout << "**Phone number should start with 01.**\n";
        return false;
    }
    return true;
}

bool validateEmail(const std::string& email) {
    if(email.size() > 50) {
        std::cout << "**Email is too long, max 50 characters allowed.**\n";
        return false;
    }
    else if(email.find('@') == std::string::npos) {
        std::cout << "**Invalid email format.**\n";
        return false;
    }
    return true;
}

bool validateAddress(const std::string& address) {
    if(address.size() > 150) {
        std::cout << "**Address is too long, max 150 characters allowed.**\n";
        return false;
    }
    return true;
}
