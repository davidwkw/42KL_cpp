#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called\n";
	this->_value = (num << Fixed::_bits);
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(num * (1 << this->_bits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->getRawBits() + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->getRawBits() - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed	temp;
	temp.setRawBits((long)this->getRawBits() * (long)rhs.getRawBits() / (1 << Fixed::_bits));
	return (temp);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed	temp;
	temp.setRawBits(((long)this->getRawBits() * (1 << Fixed::_bits)) / rhs.getRawBits());
	return (temp);
}

Fixed Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	const Fixed temp(*this);
	this->_value++;
	return (temp);
}

Fixed Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	const Fixed temp(*this);
	this->_value--;
	return (temp);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (b.getRawBits() < a.getRawBits())
		return (b);
	return (a);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (b.getRawBits() < a.getRawBits())
		return (b);
	return (a);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (b.getRawBits() > a.getRawBits())
		return (b);
	return (a);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (b.getRawBits() > a.getRawBits())
		return (b);
	return (a);
}
