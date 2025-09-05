#include <iostream>

#ifndef PROJECT_VERSION
#define PROJECT_VERSION "0.0.0"
#endif

int main(){
    int a;
    std::cout << "Hello, World! Version " << PROJECT_VERSION;
    std::cin >> a;
    return 0;
}