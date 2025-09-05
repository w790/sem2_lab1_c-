#include <iostream>
#include "func.h"

int x = 0;
std::string getversion(){
    #ifdef PROJECT_VERSION
    std::cout << "DEBUG: PROJECT_VERSION macro is defined as: " << PROJECT_VERSION << std::endl;
    return PROJECT_VERSION;
    #else
    std::cout << "DEBUG: PROJECT_VERSION macro is NOT defined" << std::endl;
    return "1.0.0";
    #endif
}