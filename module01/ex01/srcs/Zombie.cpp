#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {}

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << "[" + name + "] Aaarrrrggggghhhh! *died*" << std::endl;
}

void Zombie::announce() const {
    std::cout << "<" + name + "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}