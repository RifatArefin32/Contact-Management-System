#include <iostream>
#include "fieldValidation.h"
#include "helperFunctions.h"

bool validateContactName(const std::string& name) {
    if (name.empty()) {
        std::cerr << "**Name is required.**\n";
        return false;
    }
    else if(name.size() > 50) {
        std::cerr << "**Name is too long, max 50 characters allowed.**\n";
        return false;
    }
    return true;
}

bool validatePhoneNumber(const std::string& phone) {
    if (phone.empty()) {
        std::cerr << "**Phone number is required.**\n";
        return false;
    }
    else if(phone.size() != 11) {
        std::cerr << "**Phone number should contain 11 digits.**\n";
        return false;
    }
    else if(!isAllDigits(phone)) {
        std::cerr << "**Phone number should contain only digits.**\n";
        return false;
    }
    else if(phone.at(0) != '0' || phone.at(1) != '1') {
        std::cerr << "**Phone number should start with 01.**\n";
        return false;
    }
    return true;
}

bool validateEmail(const std::string& email) {
    if(email.size() > 50) {
        std::cerr << "**Email is too long, max 50 characters allowed.**\n";
        return false;
    }
    else if(email.find('@') == std::string::npos) {
        std::cerr << "**Invalid email format.**\n";
        return false;
    }
    return true;
}

bool validateAddress(const std::string& address) {
    if(address.size() > 150) {
        std::cerr << "**Address is too long, max 150 characters allowed.**\n";
        return false;
    }
    return true;
}
