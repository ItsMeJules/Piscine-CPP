#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string target_;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &rrForm);
		~RobotomyRequestForm();
        
		void execute(Bureaucrat &bur) const;
		Form *clone() const;

		std::string getTarget() const;
		void setTarget(std::string target);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};

#endif