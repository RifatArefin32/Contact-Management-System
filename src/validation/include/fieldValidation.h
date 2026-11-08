#ifndef FIELD_VALIDATION_H
#define FIELD_VALIDATION_H
#include <string>

bool validateContactName(const std::string& name);
bool validatePhoneNumber(const std::string& phone);
bool validateEmail(const std::string& email);
bool validateAddress(const std::string& address);

#endif // FIELD_VALIDATION_H