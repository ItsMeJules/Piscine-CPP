#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define IDEAS_SIZE 100

class Brain {
	private:
	protected:
		std::string ideas_[IDEAS_SIZE];
	public:
		Brain();
		Brain(Brain const &brain);
		~Brain();

		std::string *getIdeas();

		Brain &operator=(Brain const &rhs);
};

#endif