/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:50 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 00:47:14 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"
#include "Fixed.hpp"
#include "bsp.hpp"

static void check(const Point point, const Point x, const Point y, const Point z) {
    std::cout << point << (bsp(x, y, z, point) ? " is inside" : " is outside")
            << " Triangle ABC" << std::endl;
    std::cout << point << (bsp(z, y, x, point) ? " is inside" : " is outside")
            << " Triangle CBA" << std::endl;
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

    check(a, A, B, C);
    check(b, A, B, C);
    check(c, A, B, C);
    check(d, A, B, C);
    check(e, A, B, C);
    check(A, A, B, C);
    check(B, A, B, C);
    check(C, A, B, C);

    return 0;
}
