/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:55 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 12:47:59 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point(void);
	Point(float const num1, float const num2);
	Point(Point const & point);
	~Point();

	Point & operator=(Point const & rhs);

	const Fixed	getX(void) const;
	const Fixed	getY(void) const;
};

std::ostream & operator<<(std::ostream & o, Point const &rhs);

#endif
