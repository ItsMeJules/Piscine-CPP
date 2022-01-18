#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class ElemNotFoundException : public std::exception {
	const char *what() const throw() {
		return "Element not found!";
	} 
};

template<typename T>
typename T::iterator easyfind(T &container, int occ) {
	typename T::iterator found = std::find(container.begin(), container.end(), occ);
	if (found == container.end())
		throw ElemNotFoundException();
	else
		return found;
}

#endif