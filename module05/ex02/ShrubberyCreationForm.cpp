#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 72, 45), target_("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 72, 45),
	  target_(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ppForm)
	: Form("ShrubberyCreationForm", 72, 45),
	  target_(ppForm.target_) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const {
	return target_;
}

void ShrubberyCreationForm::execute(Bureaucrat &bur) const {
	try {
		Form::checkExecute(bur);
	} catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
		return;
	}
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	Form::operator=(rhs);
	return *this;
}