#include <iostream>
#include "iter.hpp"

template<typename T>
T setToZero(T &nb) {
	(void)nb;
	return 0;
}

template<typename T>
T multiply2(T &nb) {
	return nb * 2;
}

int main() {
	int tabI[] = {5, 5356, 915, 124, 6423, 86, 356, 876, 96, 356};
	float tabF[] = {5, 5356, 915, 124, 6423, 86, 356, 876, 96, 356}; 
	size_t const iTabLen = sizeof(tabI) / sizeof(tabI[0]);
	size_t const fTabLen = sizeof(tabF) / sizeof(tabF[0]);

	iter(tabI, iTabLen, &setToZero);
	iter(tabF, fTabLen, &multiply2);

	for (size_t i = 0; i < iTabLen; i++)
		std::cout << tabI[i] << std::endl;
	std::cout << std::endl;
	for (size_t i = 0; i < fTabLen; i++)
		std::cout << tabF[i] << std::endl;
}