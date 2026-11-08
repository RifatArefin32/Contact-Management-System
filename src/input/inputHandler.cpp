#include <iostream>
#include "define.h"
#include "inputHandler.h"   
#include "../contact/include/contactManager.h"
#include "../validation/include/inputValidation.h"

void welcomeMessage() {
    std::cout << "Welcome to the Contact Management System!\n";
}

void showMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Add Contact\n";
    std::cout << "2. View Contacts\n";
    std::cout << "3. Search Contact\n";
    std::cout << "4. Edit Contact\n";
    std::cout << "5. Delete Contact\n";
    std::cout << "6. Exit\n";
}

void selectOption() {
    int option;
    std::cout << "Option: ";
    std::cin >> option;
    if (!validateOption(option)) {
        selectOption();
    } else {
        switch (option) {
            case ADD_CONTACT:
                addContact();
                break;
            case VIEW_CONTACTS:
                viewContacts();
                break;
            case SEARCH_CONTACT:
                searchContact();
                break;
            case EDIT_CONTACT:
                editContact();
                break;
            case DELETE_CONTACT:
                deleteContact();
                break;
            case EXIT:
                exitProgram();
                break;
        }
    }
}