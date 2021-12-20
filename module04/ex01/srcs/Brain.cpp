#include "Brain.hpp"

Brain::Brain() {
	std::cout << "I'm a default brain constructor" << std::endl;	
}

Brain::Brain(Brain const &brain) {
	std::cout << "I'm a copy brain constructor" << std::endl;
	*this = brain;
}

Brain::~Brain() {
}

std::string *Brain::getIdeas() {
	return ideas_;
}

Brain &Brain::operator=(Brain const &rhs) {
	if (&rhs != this) {
		for (int i = 0; i < 100; i++) {
			ideas_[i] = rhs.ideas_[i];
		}
	}
	return *this;
}
