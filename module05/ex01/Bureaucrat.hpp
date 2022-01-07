#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Form;

class Bureaucrat {
    private:
        std::string const name_;
        unsigned int grade_;
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, unsigned int grade);
        Bureaucrat(Bureaucrat const &bureaucrat);
        ~Bureaucrat();

        void signForm(Form const &form);

        std::string const getName() const;
        unsigned int getGrade() const;
        void raiseGrade();
        void lowerGrade();

        Bureaucrat &operator=(Bureaucrat const &rhs);

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif