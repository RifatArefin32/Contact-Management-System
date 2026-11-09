#include <iostream>
#include "inputValidation.h"
#include "fieldValidation.h"


bool validateOption(int option) {
    if (option < 0 || option > 5) {
        return false;
    }
    return true;
}

bool validateContact(const std::string& name, const std::string& phone, const std::string& email, const std::string& address) {
    if (name.empty() || phone.empty()) {
        std::cerr << "**Name and phone are required.**\n";
        return false;
    }
    else if (!validateContactName(name)) {
        return false;
    }
    else if(!validatePhoneNumber(phone)) {
        return false;
    }
    else if(!email.empty() && !validateEmail(email)) {
        return false;
    }
    else if(!address.empty() && !validateAddress(address)) {
        return false;
    }
    return true;
}