/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:50 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 21:43:23 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"
#include "Fixed.hpp"
#include "bsp.hpp"

static void validate_point(Point const x, Point const y, Point const z, Point const point) {
    std::cout << point << (bsp(x, y, z, point) ? " is inside" : " is outside")
              << " Triangle ABC\n";
    std::cout << point << (bsp(z, y, x, point) ? " is inside" : " is outside")
              << " Triangle CBA\n";
}

int main(void) {
    Point A(-15, 0);
    Point B(0, 15);
    Point C(15, 0);

    Point a(0, 0);
    Point b(15, 15);
    Point c(-15, -15);
    Point d(0, 10.5f);
    Point e(0.5f, 0.5f);

    std::cout << "A: " << A << std::endl;
    std::cout << "B: " << B << std::endl;
    std::cout << "C: " << C << std::endl;

    validate_point(A, B, C, a);
    validate_point(A, B, C, b);
    validate_point(A, B, C, c);
    validate_point(A, B, C, d);
    validate_point(A, B, C, e);
    return 0;
}
