#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    std::vector<int> vec2;

    for (int i = 0; i < 10; i++)
        vec.push_back(i);
    for (int i = 10; i < 20; i++)
        vec2.push_back(i);
    std::cout << *easyfind(vec, 4) << std::endl;
    try {
        std::cout << *easyfind(vec2, 4) << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error was thrown: " << e.what() << std::endl;
    }
    return 0;
}