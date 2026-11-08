#pragma once
#include <string>
#include <vector>

class Contact {
public:
    Contact() = default;
    Contact(const std::string& name, const std::string& phone, const std::string& email, const std::string& address)
        : m_name(name), m_phone(phone), m_email(email), m_address(address) {}
    ~Contact() = default;
    // memeber functions to get contact details
    std::string getName() const { return m_name; }
    std::string getPhone() const { return m_phone; }
    std::string getEmail() const { return m_email; }
    std::string getAddress() const { return m_address; }

private:
    std::string m_name;
    std::string m_phone;
    std::string m_email;
    std::string m_address;
};

static std::vector<Contact> contacts;

void addContact();
void viewContacts();
void searchContact();
void editContact();
void deleteContact();
void exitProgram();