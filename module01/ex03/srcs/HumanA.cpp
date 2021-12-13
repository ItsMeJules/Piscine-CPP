#include <iostream>
#include <string>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon), name(name) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << name + " attacks with this " + weapon.getType() << std::endl;
}