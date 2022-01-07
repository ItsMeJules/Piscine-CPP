#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat defaultBur;
    Bureaucrat one("Johnson", 1);
    Bureaucrat fifty("Mary", 50);

    std::cout << defaultBur << std::endl;
    std::cout << one << std::endl;
    std::cout << fifty << std::endl;

    for (int i = 0; i < 10; i++) {
        one.lowerGrade();
        fifty.raiseGrade();
    }

    std::cout << std::endl;

    std::cout << defaultBur << std::endl;
    std::cout << one << std::endl;
    std::cout << fifty << std::endl;

    try {
        Bureaucrat invalidHigh("InvalidHigh", 0);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidLow("InvalidLow", 151);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 1;
}