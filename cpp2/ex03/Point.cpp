#include <Point.hpp>

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::Point(float const num1, float const num2) : _x(num1), _y(num2)
{
	return;
}

Point::Point(Point const & src) : _x(src._x), _y(src._y)
{
	return;
}

Point & Point::operator=(Point const & rhs)
{
	(void)rhs;
	return (*this);
}

Point::~Point()
{
	return;
}

const Fixed	Point::getX(void) const
{
	return (this->_x);
}

const Fixed	Point::getY(void) const
{
	return (this->_y);
}
