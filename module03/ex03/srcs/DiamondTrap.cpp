#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name_(ClapTrap::name_) {
	std::cout << "DiamondTrap | [" + name_ + "]> Finally... I am summoned by default!" << std::endl;
	ClapTrap::name_ += "_clap_name";
	energyPoints_= 50;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name_(name) {
	std::cout << "DiamondTrap | [" + name_ + "]> Finally... I am summoned!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap)
	: ClapTrap(diamondTrap),
	  FragTrap(diamondTrap),
	  ScavTrap(diamondTrap),
	  name_(diamondTrap.name_) {
	std::cout << "DiamondTrap | [" + name_ + "]> Finally... I am copied\?\?!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap | [" + name_ + "]> NOOOOOOOOOO DON'T CALL ME BACK" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
	ClapTrap::operator=(rhs);
	name_ = rhs.name_;
	std::cout << "DiamondTrap | operator= called!" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI() const {
	std::cout << "My Diamond name is: " << name_ << " and my Clap name is: " << ClapTrap::name_ << std::endl;
}

std::string DiamondTrap::getName() const {
	return this->name_;
}