#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOROMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string target_;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const &rrForm);
		~RobotomyRequestForm();
        
		void execute(Bureaucrat &bur) const;

		std::string getTarget() const;

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};

#endif