#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

Intern::Intern() : forms_(new Form*[3]) {
    forms_[0] = new PresidentialPardonForm();
    forms_[1] = new RobotomyRequestForm();
    forms_[2] = new ShrubberyCreationForm();
}

Intern::Intern(Intern const &it) : forms_(new Form*[3]) {
    for (int i = 0; i < 3; i++)
        forms_[i] = it.forms_[i];
}

Intern::~Intern() {
    for (int i = 0; i < 3; i++)
        delete forms_[i];
    delete[] forms_;
}

Form *Intern::makeForm(std::string formType, std::string formTarget) {
    Form *form = NULL;

    for (int i = 0; i < 3; i++) {
        if (forms_[i]->getName().compare(formType) == 0)
            form = forms_[i]->clone();
    }
    if (form != NULL) {
        form->setTarget(formTarget);
        std::cout << "Intern creates " << formType << " targeted on " << formTarget << std::endl;
    } else
        std::cout << "The form " << formType << " was not found!" << std::endl;
    return form;
}

Intern &Intern::operator=(Intern const &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 3; i++) {
            if (forms_[i] != NULL)
                delete forms_[i];
            forms_[i] = rhs.forms_[i];
        }
    }
    return *this;
}