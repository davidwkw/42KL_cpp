/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:50 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 12:47:18 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"
#include "Fixed.hpp"
#include "bsp.hpp"

static void check(const Point a, const Point x, const Point y, const Point z) {
    std::cout << a << (bsp(x, y, z, a) ? " is inside" : " is outside")
            << " Triangle XYZ" << std::endl;
    std::cout << a << (bsp(z, y, x, a) ? " is inside" : " is outside")
            << " Triangle ZYX" << std::endl;
}

int main(void) {
    Point x(0, 0);
    Point y(0, 1);
    Point z(1, 0);

    Point a(0, 0.5f);
    Point b(0.5f, 1);
    Point c(1, 0.5f);
    Point d(0.5f, 0);
    Point e(0.5f, 0.5f);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    check(a, x, y, z);
    check(b, x, y, z);
    check(c, x, y, z);
    check(d, x, y, z);
    check(e, x, y, z);
    check(x, x, y, z);
    check(y, x, y, z);
    check(z, x, y, z);

    return 0;
}
