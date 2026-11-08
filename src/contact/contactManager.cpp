#include <iostream>
#include "../contact/include/contactManager.h"
#include "../validation/include/inputValidation.h"


void addContact() {
    std::cout << "Adding a new contact...\n";
    
    std::string name, phone, email, address;
    std::cout << "Enter name: ";
    std::cin.get(); // Clear the newline character from the input buffer
    std::getline(std::cin, name);
    std::cout << "Enter phone: ";
    std::getline(std::cin, phone);
    std::cout << "Enter email: ";
    std::getline(std::cin, email);
    std::cout << "Enter address: ";
    std::getline(std::cin, address);

    if (validateContact(name, phone, email, address)) {
        Contact newContact(name, phone, email, address);
        contacts.push_back(newContact);
        std::cout << "Contact added successfully!\n";
    }
    else {
        std::cout << "Failed to add contact due to validation errors.\n";
    }
}

void viewContacts() {
    std::cout << "Viewing all contacts...\n";
    // Implementation for viewing contacts
}

void searchContact() {
    std::cout << "Searching for a contact...\n";
    // Implementation for searching a contact
}

void editContact() {
    std::cout << "Editing a contact...\n";
    // Implementation for editing a contact
}

void deleteContact() {
    std::cout << "Deleting a contact...\n";
    // Implementation for deleting a contact
}

void exitProgram() {
    std::cout << "Exiting the program. Goodbye!\n";
    exit(0);
}