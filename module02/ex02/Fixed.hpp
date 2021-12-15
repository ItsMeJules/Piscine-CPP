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

		Fixed &operator=(Fixed const &rhs);
		Fixed &operator++();
		Fixed operator++(int n);
		Fixed &operator--();
		Fixed operator--(int n);
		
		static Fixed &min(Fixed &f1, Fixed &f2);
		static const Fixed &min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static const Fixed &max(Fixed const &f1, Fixed const &f2);
};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);
bool operator>(Fixed const &a, Fixed const&b);
bool operator<(Fixed const &a, Fixed const&b);
bool operator>=(Fixed const &a, Fixed const&b);
bool operator<=(Fixed const &a, Fixed const&b);
bool operator==(Fixed const &a, Fixed const&b);
bool operator!=(Fixed const &a, Fixed const&b);
Fixed operator+(Fixed const &a, Fixed const&b);
Fixed operator-(Fixed const &a, Fixed const&b);
Fixed operator*(Fixed const &a, Fixed const&b);
Fixed operator/(Fixed const &a, Fixed const&b);

#endif