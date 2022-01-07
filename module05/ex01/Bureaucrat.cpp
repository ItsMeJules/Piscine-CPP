#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

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

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this == &rhs)
        return *this;
    this->grade_ = rhs.grade_;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

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
