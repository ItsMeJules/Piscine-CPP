#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *array_beg, size_t const array_len, T (*f)(T &arg)) {
	for (size_t i = 0; i < array_len; i++)
		array_beg[i] = f(array_beg[i]);
}

#endif