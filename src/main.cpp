#include <iostream>
#include "inputHandler.h"

#if 0
g++ --std=c++17 -Wall -Wextra \
-I src/input/include \
-I src/operation/include \
-I src \
src/main.cpp \
src/input/inputHandler.cpp \
src/operation/operationHandler.cpp \
-o app
#endif

int main() {
    welcomeMessage();
    showMenu();
    selectOption();

    return 0;
}