#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
    : name_("default"),
      sign_(false),
      signGrade_(150),
      execGrade_(150) {}

Form::Form(std::string const name, unsigned int const signGrade, unsigned const execGrade)
    : name_(name),
      sign_(false),
      signGrade_(signGrade),
      execGrade_(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &form)
    : name_(form.name_),
      sign_(form.sign_),
      signGrade_(form.signGrade_),
      execGrade_(form.execGrade_) {}

Form::~Form() {}

void Form::beSigned(Bureaucrat const &bur) {
    if (bur.getGrade() <= signGrade_)
        sign_ = true;
    else
        throw Form::GradeTooLowException();
}

std::string const Form::getName() const {
    return name_;
}

bool Form::isSigned() const {
    return sign_;
}

unsigned int Form::getSignGrade() const {
    return signGrade_;
}

unsigned int Form::getExecGrade() const {
    return execGrade_;
}

const char *Form::GradeTooLowException::what() const throw() {
    return "The grade is too low to sign this form!";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "The grade is too high?"; //never happens
}

std::ostream &operator<<(std::ostream &os, Form const &rhs) {
    os << rhs.getName() << ", form signed: " << rhs.isSigned() << ", grade for signing: " << rhs.getSignGrade()
    << ", grade for execution: " << rhs.getExecGrade();
    return os;
}