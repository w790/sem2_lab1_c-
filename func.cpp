#include <iostream>
#include "func.h"

#ifndef PROJECT_VERSION
#define PROJECT_VERSION "1.0.0" // значение по умолчанию
#endif

int x = 0;
std::string getversion(){
    return PROJECT_VERSION;
}