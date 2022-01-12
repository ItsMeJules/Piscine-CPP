#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name_("Default"), grade_(150) {}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : name_(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    grade_ = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) {
    if (this == &bureaucrat)
        return;
    this->grade_ = bureaucrat.grade_;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::signForm(Form &form) {
    if (form.isSigned())
        std::cout << "Form is already signed!" << std::endl;
    else if (grade_ <= form.getSignGrade()) {
        form.beSigned(*this);
        std::cout << name_ << " signs " << form.getName() << std::endl;
    } else
        std::cout << name_ << " cannot sign because their rank is too low!" << std::endl;
}

void Bureaucrat::executeForm(Form &form) {
    if (!form.isSigned())
        throw new Form::FormNotSignedException();
    if (grade_ <= form.getExecGrade()) {
        form.execute(*this);
        std::cout << name_ << " executes " << form.getName() << std::endl;
    } else
        throw Bureaucrat::GradeTooLowException();
}

std::string const Bureaucrat::getName() const {
    return name_;
}

unsigned int Bureaucrat::getGrade() const {
    return grade_;
}

void Bureaucrat::raiseGrade() {
    if (grade_ != 1)
        grade_--;
}

void Bureaucrat::lowerGrade() {
    if (grade_ != 150)
        grade_++;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this == &rhs)
        return *this;
    this->grade_ = rhs.grade_;
    return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "The grade is too low. Minimum is 150.";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "The grade is too high. Maximum is 1.";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs) {
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return os;
}
