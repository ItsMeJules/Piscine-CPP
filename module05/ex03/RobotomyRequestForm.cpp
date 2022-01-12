#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target_("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45),
	  target_(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ppForm)
	: Form("RobotomyRequestForm", 72, 45),
	  target_(ppForm.target_) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat &bur) const {
	try {
		Form::checkExecute(bur);
	} catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
		return;
	}
    std::cout << "BBBBBBRRRRRRRAAAAAAACHAHAHAHAHHAHAHAHAAAAAAAAAAAAAA" << std::endl;
    srand(time(NULL));
    if (rand() % 2 == 0)
        std::cout << target_ << " was successfully robotomized!" << std::endl;
    else
        std::cout << target_ << "'s robotomization failed..." << std::endl;
}

Form *RobotomyRequestForm::clone() const {
	return new RobotomyRequestForm(*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return target_;
}

void RobotomyRequestForm::setTarget(std::string target) {
	target_ = target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	Form::operator=(rhs);
	return *this;
}