#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialForm", 25, 5), target_("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialForm", 25, 5),
	  target_(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppForm)
	: Form("PresidentialForm", 25, 5),
	  target_(ppForm.target_) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat &bur) const {
	try {
		Form::checkExecute(bur);
	} catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
		return;
	}
	std::cout << target_ << " was forgiven by Zafod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
	return target_;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	Form::operator=(rhs);
	return *this;
}