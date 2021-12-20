#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	private:
	protected:
		std::string type_;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &wrongAnimal);
		~WrongAnimal();

		void makeSound() const;

		std::string getType() const;

		WrongAnimal &operator=(WrongAnimal const &rhs);
};

#endif