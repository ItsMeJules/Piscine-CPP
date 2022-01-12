#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string target_;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &ppForm);
		~PresidentialPardonForm();

		void execute(Bureaucrat &bur) const;
		Form *clone() const;

		std::string getTarget() const;
		void setTarget(std::string target);

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
};

#endif