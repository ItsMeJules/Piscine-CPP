#include <iostream>
#include <ctime>
#include "span.hpp"

int main() {
    std::vector<int> vec;
    span sp = span(100);
    span spRange = span(100);
    span spRangeBig = span(100000);

    srand(time(NULL));
    vec.reserve(100);

    for (unsigned int i = 0; i < sp.getSize(); i++) {
        sp.addNumber(rand() % 1000);
        vec.push_back(rand() % 1000);
    }
    for (unsigned int i = 0; i < spRangeBig.getSize(); i++)
        spRangeBig.addNumber(rand() % 100000);
    spRange.addRange(vec.begin(), vec.end());

    for (unsigned int i = 0; i < sp.getSize(); i++)
        std::cout << sp.getVector()[i] << (i + 1 == sp.getSize() ? "." : ", ");
    std::cout << std::endl << std::endl;

    for (unsigned int i = 0; i < spRange.getSize(); i++)
        std::cout << spRange.getVector()[i] << (i + 1 == spRange.getSize() ? "." : ", ");
    std::cout << std::endl << std::endl;

    std::cout << "The sp size is: " << sp.getSize() << std::endl;
    std::cout << "\tshortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "\tlongest span: " << sp.longestSpan() << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "The spRange size is: " << spRange.getSize() << std::endl;
    std::cout << "\tshortest span: " << spRange.shortestSpan() << std::endl;
    std::cout << "\tlongest span: " << spRange.longestSpan() << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "The spRangeBig size is: " << spRangeBig.getSize() << std::endl;
    std::cout << "\tshortest span: " << spRangeBig.shortestSpan() << std::endl;
    std::cout << "\tlongest span: " << spRangeBig.longestSpan() << std::endl;
    return 0;
}