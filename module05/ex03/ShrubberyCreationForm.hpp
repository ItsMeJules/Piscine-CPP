#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string target_;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &scForm);
		~ShrubberyCreationForm();
        
		void execute(Bureaucrat &bur) const;
		Form *clone() const;

		std::string getTarget() const;
		void setTarget(std::string target);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};

#endif