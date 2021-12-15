#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int rawBits_;
		static const int fBits;
	public:
		Fixed();
		Fixed(int const val);
		Fixed(float const val);
		Fixed(Fixed const &rhs);
		~Fixed();

		float toFloat() const;
		int toInt() const;

		int getRawBits() const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif