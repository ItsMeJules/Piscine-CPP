#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat one("Johnson", 1);
    Bureaucrat fifty("Mary", 50);
    Form defaultForm;
    Form form("APL", 10, 10);

    std::cout << defaultForm << std::endl;
    std::cout << form << std::endl;

    std::cout << std::endl;

    try {
        std::cout << "Is form signed: " << form.isSigned() << std::endl;
        form.beSigned(one);
        std::cout << "Is form signed: " << form.isSigned() << std::endl;
        form.beSigned(fifty);
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;
    
    fifty.signForm(form);
    one.signForm(form);
    return 1;
}