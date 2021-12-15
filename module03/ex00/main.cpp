#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap ct1("Michel");
	ClapTrap ct2(ct1);

	ct1.takeDamage(3);
	ct1.attack(ct2.getName());
	ct2.beRepaired(6);
	return 1;
}