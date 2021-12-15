#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap | [" + name_ + "]> Finally... I am summoned by default!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap) {

}

DiamondTrap::~DiamondTrap() {

}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {

}
