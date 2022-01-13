#include <iostream>
#include <string>
#include <cstdlib>
#include "Base.hpp"

Base *generate() {
    int r = rand() % 3;

    if (r == 0) {
        std::cout << "A class was instanciated" << std::endl;
        return new A();
    } else if (r == 1) {
        std::cout << "B class was instanciated" << std::endl;
        return new B();
    } else {
        std::cout << "C class was instanciated" << std::endl;
        return new C();
    }
}   

void identify(Base *base) {
    if (dynamic_cast<A*>(base) != NULL)
        std::cout << "Base pointer is of type A" << std::endl;
    else if (dynamic_cast<B*>(base) != NULL)
        std::cout << "Base pointer is of type B" << std::endl;
    else if (dynamic_cast<C*>(base) != NULL)
        std::cout << "Base pointer is of type C" << std::endl;
}

void identifyRef(Base &base) {
    try {
        A &ref = dynamic_cast<A &>(base);
        (void)ref;
        std::cout << "Base ref is of type A" << std::endl;
        return;
    } catch(const std::exception& e) {}
    
    try {
        B &ref = dynamic_cast<B &>(base);
        (void)ref;
        std::cout << "Base ref is of type B" << std::endl;
        return;
    } catch(const std::exception& e) {}
    
    try {
        C &ref = dynamic_cast<C &>(base);
        (void)ref;
        std::cout << "Base ref is of type C" << std::endl;
        return;
    } catch(const std::exception& e) {}
}

int main() {
    Base *base = NULL;

    for (int i = 0; i < 10; i++) {
        base = generate();
        identify(base);
        identifyRef(*base);
        std::cout << std::endl;
        delete base;
    }
    return 0;
}