#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat one("Johnson", 1);
    Bureaucrat fifty("Mary", 100);
    Intern intern;
    Form *presForm;
    Form *robotForm;
    Form *shrubForm;
    Form *nonExist;

    presForm = intern.makeForm("PresidentialForm", "Chirac");
    robotForm = intern.makeForm("RobotomyRequestForm", "Bender");
    shrubForm = intern.makeForm("ShrubberyCreationForm", "Pin d'Alep");
    nonExist = intern.makeForm("RANDOM", "No one");

    try {
        presForm->beSigned(one);
        robotForm->beSigned(one);
        shrubForm->beSigned(one);
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << *presForm << std::endl;
    std::cout << *robotForm << std::endl;
    std::cout << *shrubForm << std::endl;
    std::cout << std::endl;

    presForm->execute(fifty);

    presForm->execute(one);
    one.executeForm(*robotForm);
    shrubForm->execute(one);

    delete presForm;
    delete robotForm;
    delete shrubForm;
    return 1;
}