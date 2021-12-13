#include <iostream>
#include <string>
#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(0), name(name) {}

HumanB::~HumanB() {}

void HumanB::attack() const {
	if (weapon)
		std::cout << name + " attacks with this " + weapon->getType() << std::endl;
	else
		std::cout << name + " has no weapon yet!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
