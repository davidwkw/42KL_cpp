/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:53 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:11:33 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(float const num1, float const num2) : _x(Fixed(num1)), _y(Fixed(num2)) {}

Point::Point(Point const & src) : _x(src._x), _y(src._y) {}

Point & Point::operator=(Point const & rhs)
{
	(void)rhs;
	return (*this);
}

Point::~Point() {}

Fixed const	Point::getX(void) const
{
	return (this->_x);
}

Fixed const	Point::getY(void) const
{
	return (this->_y);
}

std::ostream & operator<<(std::ostream & o, Point const &rhs)
{
	o << "Coordinate (" << rhs.getX() << ',' << rhs.getY() << ")";
	return o;
}
