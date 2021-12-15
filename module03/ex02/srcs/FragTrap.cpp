#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	  hitPoints_ = 100;
	  energyPoints_ = 100;
	  attackDamage_ = 30;
	std::cout << "FragTrap | [" + name_ + "]> Finally... I am summoned by default!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	  hitPoints_ = 100;
	  energyPoints_ = 100;
	  attackDamage_ = 30;
	std::cout << "FragTrap | [" + name_ + "]> Finally... I am summoned!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrap) : ClapTrap(fragTrap) {
	std::cout << "FragTrap | [" + name_ + "]> Finally... I am copied\?\?!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap | [" + name_ + "]> NOOOOOOOOOO DON'T CALL ME BACK" << std::endl;
}

void FragTrap::attack(std::string const &target) const {
	std::cout << "FragTrap " << name_ << " attacks ";
	std::cout << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() const {
	std::cout << "WOW! We've just done a high-five!" << std::endl;
}