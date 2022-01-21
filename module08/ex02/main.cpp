#include <iostream>
#include <stack>
#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "last inserted: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "stack size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "Elements of mutant stack: " << std::endl;
    while (it != ite) {
        std::cout << '\t' << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "Elements of stack: " << std::endl;
    while (!s.empty()) {
        std::cout << '\t' << s.top() << std::endl;
        s.pop();
    }
    
    return 0;
}