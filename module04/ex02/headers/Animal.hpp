#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	private:
	protected:
		std::string type_;
	public:
		Animal();
		Animal(Animal const &animal);
		virtual ~Animal();

		void virtual makeSound() const = 0;

		std::string getType() const;

		Animal &operator=(Animal const &rhs);
};

#endif