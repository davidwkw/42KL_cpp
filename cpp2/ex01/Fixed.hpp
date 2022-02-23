#ifndef FIXED_HPP

# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_value;
		static const int _bits;
	public:
		Fixed(void);
		Fixed(int const num);
		Fixed(float const num);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
