#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    private:
    public:
        typedef typename std::stack<T>::container_type::iterator iterator; //typename is mandatory because std::stack<T> is a template.
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack() {}
        MutantStack(MutantStack<T> const &mutantStack) : std::stack<T>(mutantStack) {}
        virtual ~MutantStack() {}

        iterator begin() {
            return this->c.begin();
        }   

        const_iterator begin() const {
            return this->c.begin();
        }
        
        iterator end() {
            return this->c.end();
        }

        const_iterator end() const {
            return this->c.end();
        }

        reverse_iterator rbegin() {
            return this->c.rbegin();
        }        

        const_reverse_iterator rbegin() const {
            return this->c.rbegin();
        }
        
        reverse_iterator rend() {
            return this->c.rend();
        }

        const_reverse_iterator rend() const {
            return this->c.rend();
        }

        MutantStack<T> &operator=(MutantStack<T> const &rhs) {
            this->c = rhs.c;
            return *this;
        }
};

#endif