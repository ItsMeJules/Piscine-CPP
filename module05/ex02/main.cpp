#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat one("Johnson", 1);
    Bureaucrat fifty("Mary", 100);
    Form *presForm = new PresidentialPardonForm();
    RobotomyRequestForm robotForm;
    ShrubberyCreationForm shrubForm;

    try {
        presForm->beSigned(one);
        robotForm.beSigned(one);
        shrubForm.beSigned(one);
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << *presForm << std::endl;
    std::cout << robotForm << std::endl;
    std::cout << shrubForm << std::endl;
    std::cout << std::endl;

    presForm->execute(fifty);

    presForm->execute(one);
    one.executeForm(robotForm);
    shrubForm.execute(one);

    delete presForm;
    return 1;
}