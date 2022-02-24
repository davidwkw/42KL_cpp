/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:55 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:07:57 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point(void);
	Point(float const num1, float const num2);
	Point(Point const & point);
	~Point();

	Point & operator=(Point const & rhs);

	const Fixed	getX(void) const;
	const Fixed	getY(void) const;
};

#endif
