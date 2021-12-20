#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();

		void makeSound() const;

		Cat &operator=(Cat const &rhs);
};

#endif