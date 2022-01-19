#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>

class span {
    private:
        unsigned int size_;
        std::vector<int> vector_;
    public:
        span();
        span(unsigned int N);
        span(span const &span);
        ~span();

        void addNumber(int n);
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator);
        unsigned int shortestSpan() const;
       unsigned  int longestSpan() const;

        unsigned int getSize() const;
        std::vector<int> const &getVector() const;

        span &operator=(span const &rhs);
};

#endif