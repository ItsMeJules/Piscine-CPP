#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form {
    private:
        std::string const name_;
        bool sign_;
        unsigned int const signGrade_;
        unsigned int const execGrade_;
    public:
        Form();
        Form(std::string const name, unsigned int const signGrade, unsigned const execGrade);
        Form(Form const &form);
        ~Form();

        void beSigned(Bureaucrat const &bur);

        std::string const getName() const;
        bool isSigned() const;
        unsigned int const getSignGrade() const;
        unsigned int const getExecGrade() const;

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif