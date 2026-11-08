#include <iostream>
#include "inputHandler.h"

#if 0
g++ --std=c++17 -Wall -Wextra \
-I src/contactManager/include \
-I src/helper/include \
-I src/input/include \
-I src/validation/include \
-I src \
src/contact/contactManager.cpp \
src/helper/helperFunctions.cpp \
src/input/inputHandler.cpp \
src/validation/fieldValidation.cpp \
src/validation/inputValidation.cpp \
src/main.cpp \
-o app
#endif

int main() {
    welcomeMessage();
    showMenu();
    selectOption();

    return 0;
}