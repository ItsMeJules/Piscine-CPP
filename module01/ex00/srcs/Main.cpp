#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int main() {
    Zombie stackZombie("JeanStack");
    Zombie* heapZombie = newZombie("MarcHeap");

    stackZombie.announce();
    stackZombie.announce();
    delete heapZombie;
    return 0;
}