/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:44 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 17:28:12 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed calc(const Point x, const Point y, const Point z) {
    Fixed tmp_1 = (x.getX() - y.getX()) * (z.getY() - y.getY());
    std::cout << "tmp_1 : " << tmp_1 << '\n';
    Fixed tmp_2 = (x.getY() - y.getY()) * (z.getX() - y.getX());
    std::cout << "tmp_2 : " << tmp_2 << '\n';
    std::cout << (tmp_1 - tmp_2) << '\n';
    return (tmp_1 - tmp_2);
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
    Fixed s = calc(a, c, point);
    Fixed t = calc(b, a, point);

    if ((s < Fixed(0)) != (t < Fixed(0)) && s != Fixed(0) && t != Fixed(0))
        return false;

    Fixed d = calc(c, b, point);

    return (d == Fixed(0) || (d < Fixed(0)) == (s + t <= Fixed(0)));
}


// #include "Point.hpp"
// #include "Fixed.hpp"

// Fixed sign(Point ref_point, Point p2, Point p3)
// {
//     return Fixed((ref_point.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (ref_point.getY() - p3.getY()));
// }

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed d1, d2, d3;
//     bool has_neg, has_pos;

//     d1 = sign(point, a, b);
//     d2 = sign(point, b, c);
//     d3 = sign(point, c, a);

//     has_neg = (d1 < Fixed(0)) || (d2 < Fixed(0)) || (d3 < Fixed(0));
//     has_pos = (d1 > Fixed(0)) || (d2 > Fixed(0)) || (d3 > Fixed(0));

// 	return !(has_neg && has_pos);
// }
