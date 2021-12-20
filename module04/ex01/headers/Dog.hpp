#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *brain_;
	public:
		Dog();
		Dog(Dog const &dog);
		~Dog();

		void makeSound() const;

		Brain *getBrain();

		Dog &operator=(Dog const &rhs);
};

#endif