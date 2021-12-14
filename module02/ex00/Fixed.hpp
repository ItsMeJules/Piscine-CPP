#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int rawBits_;
		static const int fBits;
	public:
		Fixed();
		Fixed(Fixed const &rhs);
		~Fixed();

		Fixed &operator=(Fixed const &rhs);
		int getRawBits() const;
		void setRawBits(int const raw);	
};

#endif