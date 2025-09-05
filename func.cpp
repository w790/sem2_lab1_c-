#include <iostream>
#include "func.h"

int x = 0;
std::string getversion(){
    #ifdef PROJECT_VERSION
    return PROJECT_VERSION;
    #else
    return "1.0.0"; // Запасной вариант
    #endif
}