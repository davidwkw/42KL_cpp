/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:46 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 00:28:22 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(int const num)
{
	this->_value = (num << Fixed::_bits);
}

Fixed::Fixed(float const num)
{
	this->_value = static_cast<int>(roundf(num * (1 << Fixed::_bits)));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}

Fixed::~Fixed(void) {}

Fixed::Fixed(Fixed const & src)
{
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
	if (this != &rhs)
		this->_value = rhs._value;
	return *this;
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->_value > rhs._value);
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->_value < rhs._value);
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_value >= rhs._value);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_value <= rhs._value);
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->_value == rhs._value);
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_value != rhs._value);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed tmp;
	tmp.setRawBits(this->_value + rhs._value);
	return (tmp);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed tmp;
	tmp.setRawBits(this->_value - rhs._value);
	return (tmp);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed	temp;
	temp.setRawBits(static_cast<int>(static_cast<long>(this->_value) * static_cast<long>(rhs._value) >> Fixed::_bits));
	return (temp);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed	temp;
	temp.setRawBits(static_cast<int>((static_cast<long>(this->_value << Fixed::_bits)) / rhs._value));
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
	return (static_cast<float>(this->_value) / static_cast<float>((1 << Fixed::_bits)));
}

int Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (b._value < a._value)
		return (b);
	return (a);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (b._value < a._value)
		return (b);
	return (a);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (b._value > a._value)
		return (b);
	return (a);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (b._value > a._value)
		return (b);
	return (a);
}
