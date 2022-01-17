#include <iostream>
#include <string>
#include <sstream>
#include "Array.hpp"

int main() {
    Array<int> tabInt(10);
    int *a = new int[10];
    Array<std::string> tabString(10);
    std::ostringstream ostring;

    for (size_t i = 0; i < tabInt.getSize(); i++) {
        tabInt[i] = i;
        a[i] = i;
    }
    
    for (size_t i = 0; i < tabString.getSize(); i++) {
        ostring << "str number : " << i;
        tabString[i] = std::string(ostring.str());
        ostring.str("");
    }
    
    for (int i = 0; i < 10; i++) {
        std::cout << i << " " << tabInt[i] << std::endl;
        std::cout << i << " " << a[i] << std::endl;
    }
    for (int i = 0; i < 10; i++)
        std::cout << i << " " << tabString[i] << std::endl;

    delete [] a;
    std::cout << tabString[10] << std::endl;
    return 0;
}