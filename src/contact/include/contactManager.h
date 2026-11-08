#pragma once
#include <string>
#include <vector>

class Contact {
public:
    Contact() = default;
    Contact(const std::string& name, const std::string& phone, const std::string& email, const std::string& address)
        : name(name), phone(phone), email(email), address(address) {}
    ~Contact() = default;
private:
    std::string name;
    std::string phone;
    std::string email;
    std::string address;
};

static std::vector<Contact> contacts;

void addContact();
void viewContacts();
void searchContact();
void editContact();
void deleteContact();
void exitProgram();