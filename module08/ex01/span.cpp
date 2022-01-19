#include "span.hpp"
#include <iostream>
#include <stdexcept>

span::span() : size_(0) {}

span::span(unsigned int N) : size_(N) {
    vector_.reserve(N);
}

span::span(span const &span) : size_(span.size_), vector_(span.vector_) {}
span::~span() {}

void span::addNumber(int n) {
    if (vector_.size() >= size_)
        throw std::length_error("Vector is full! Cannot add another number.");
    vector_.push_back(n);
}

void span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    unsigned long size = vector_.size();
    std::vector<int>::iterator beginCopy = begin;

    while (begin++ != end)
        size++;
    if (size > size_)
        throw std::length_error("Vector size would be full! Cannot add any numbers.");
    vector_.insert(vector_.end(), beginCopy, end);
}

unsigned int span::shortestSpan() const {
    int lowest = vector_[0];
    int lowest2 = vector_[0];
    
    if (vector_.size() <= 1)
        throw std::logic_error("The vector only has a size <= 1. Span can't be found!");
    for (std::vector<int>::const_iterator it = vector_.begin(); it != vector_.end(); it++) {
        if (*it < lowest) {
            lowest2 = lowest;
            lowest = *it;
        } else if (*it < lowest2)
            lowest2 = *it;
    }
    return lowest2 - lowest;
}

unsigned int span::longestSpan() const {
    int lowest = vector_[0];
    int highest = vector_[0];

    if (vector_.size() <= 1)
        throw std::logic_error("The vector only has a size <= 1. Span can't be found!");
    for (std::vector<int>::const_iterator it = vector_.begin(); it != vector_.end(); it++) {
        if (*it > highest)
            highest = *it;
        if (*it < lowest)
            lowest = *it;
    }
    return highest - lowest;
}

unsigned int span::getSize() const {
    return size_;
}

std::vector<int> const &span::getVector() const {
    return vector_;
}

span &span::operator=(span const &rhs) {
    if (&rhs == this)
        return *this;
    size_ = rhs.size_;
    vector_ = rhs.vector_;
    return *this;
}