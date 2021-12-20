#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *brain_;
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();

		void makeSound() const;

		Brain *getBrain();

		Cat &operator=(Cat const &rhs);
};

#endif