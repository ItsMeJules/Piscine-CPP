#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name_("default"),
	  hitPoints_(10),
	  energyPoints_(10),
	  attackDamage_(0) {
	std::cout << "[" + name_ + "]> Finally... I am by default summoned!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name_(name),
	  hitPoints_(10),
	  energyPoints_(10),
	  attackDamage_(0) {
	std::cout << "[" + name + "]> Finally... I am summoned!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap)
	: name_(clapTrap.name_),
	  hitPoints_(clapTrap.hitPoints_),
	  energyPoints_(clapTrap.energyPoints_),
	  attackDamage_(clapTrap.attackDamage_) {
	std::cout << "[" + name_ + "]> Finally... I am copied\?\?! " << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "[" + name_ + "]> NOOOOOOOOOO DON'T CALL ME BACK" << std::endl;
}

void ClapTrap::attack(std::string const &target) const {
	std::cout << "ClapTrap " << name_ << " attacks ";
	std::cout << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	energyPoints_ -= amount;
	std::cout << "ClapTrap " << name_ << " has taken ";
	std::cout << amount << " point" << (amount > 1 ? "s" : "") << " of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	energyPoints_ += amount;
	std::cout << "ClapTrap " << name_ << " has taken ";
	std::cout << amount << " point" << (amount > 1 ? "s" : "") << " of repair." << std::endl;
}

std::string ClapTrap::getName() const {
	return name_;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	if (&rhs != this) {
		name_ = rhs.name_;
		hitPoints_ = rhs.hitPoints_;
		energyPoints_ = rhs.energyPoints_;
		attackDamage_ = rhs.attackDamage_;
	}
	return *this;
}