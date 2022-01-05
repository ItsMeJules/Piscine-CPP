#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal *array[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << std::endl;
	}
	Cat cat;
	
	cat.getBrain()->getIdeas()[0] = "Hello";
	cat.getBrain()->getIdeas()[1] = " how";
	cat.getBrain()->getIdeas()[2] = " are";
	cat.getBrain()->getIdeas()[3] = " you.";

	for (int i = 0; i < 4; i++) {
		std::cout << cat.getBrain()->getIdeas()[i] << std::endl;
	}

	Cat *cat1 = new Cat(cat);
	for (int i = 0; i < 4; i++) {
		std::cout << cat1->getBrain()->getIdeas()[i] << std::endl;
	}

	delete cat1;
	for (int i = 0; i < 10; i++)
		delete array[i];
	return 1;
}