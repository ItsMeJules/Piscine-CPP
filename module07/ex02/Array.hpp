#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <sstream>

template<typename T>
class Array {
    private:
        size_t size_;
        T *array_;
    public:
        Array() : size_(0), array_(NULL) {}
        Array(unsigned int n) : size_(n), array_(new T[n]) {}
        Array(Array const &array) : size_(array.size_), array_(new T[array.size_]) {
            for (size_t i = 0; i < array.size_; i++)
                array_[i] = array.array_[i];
        }
        ~Array() {
            if (array_)
                delete [] array_;
        }

        size_t getSize() const {
            return size_;
        }

        Array &operator=(Array const &rhs) {
            if (&rhs == this)
                return *this;
            if (array_ != NULL)
                delete [] array_;
            if (size_ > 0) {
                size_ = rhs.size_;
                array_ = new T[size_];
                for (size_t i = 0; i < rhs.size_; i++)
                    array_[i] = rhs.array_[i];
            } else
                array_ = NULL;
            return (*this);
        }

        T &operator[](size_t n) {
            if (n >= size_ || n < 0) {
                std::ostringstream ostring;
                ostring << "Index: " << n << " if out of range. Array size = " << size_;
                throw std::out_of_range(ostring.str());
            }
            return array_[n];
        }
};

#endif