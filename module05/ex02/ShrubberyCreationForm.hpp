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
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const &scForm);
		~ShrubberyCreationForm();
        
		void execute(Bureaucrat &bur) const;

		std::string getTarget() const;

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};

#endif