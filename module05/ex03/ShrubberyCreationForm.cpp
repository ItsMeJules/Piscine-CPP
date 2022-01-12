#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target_("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137),
	  target_(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ppForm)
	: Form("ShrubberyCreationForm", 145, 137),
	  target_(ppForm.target_) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat &bur) const {
	try {
	Form::checkExecute(bur);
	} catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
		return;
	}
	std::ofstream ofs(std::string(target_ + "_shrubbery").c_str());

	if (ofs.is_open()) {
    ofs << "                                                         ." << std::endl;
    ofs << "                                      .         ;  " << std::endl;
    ofs << "         .              .              ;%     ;;   " << std::endl;
    ofs << "           ,           ,                :;%  %;   " << std::endl;
    ofs << "            :         ;                   :;%;'     .,   " << std::endl;
    ofs << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
    ofs << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    ofs << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    ofs << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    ofs << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    ofs << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    ofs << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
    ofs << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
    ofs << "                `@%.  `;@%.      ;@@%;         " << std::endl;
    ofs << "                  `@%%. `@%%    ;@@%;        " << std::endl;
    ofs << "                    ;@%. :@%%  %@@%;       " << std::endl;
    ofs << "                      %@bd%%%bd%%:;     " << std::endl;
    ofs << "                        #@%%%%%:;;" << std::endl;
    ofs << "                        %@@%%%::;" << std::endl;
    ofs << "                        %@@@%(o);  . '         " << std::endl;
    ofs << "                        %@@@o%;:(.,'         " << std::endl;
    ofs << "                    `.. %@@@o%::;         " << std::endl;
    ofs << "                      `)@@@o%::;         " << std::endl;
    ofs << "                        %@@(o)::;        " << std::endl;
    ofs << "                       .%@@@@%::;         " << std::endl;
    ofs << "                       ;%@@@@%::;.          " << std::endl;
    ofs << "                      ;%@@@@%%:;;;. " << std::endl;
    ofs << "                  ...;%@@@@@%%:;;;;,.." << std::endl;
    ofs.close();
	} else
		std::cerr << "Failed to open the file " << target_ << "_shrubbery" << std::endl;
}

Form *ShrubberyCreationForm::clone() const {
	return new ShrubberyCreationForm(*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return target_;
}

void ShrubberyCreationForm::setTarget(std::string target) {
	target_ = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	Form::operator=(rhs);
	return *this;
}