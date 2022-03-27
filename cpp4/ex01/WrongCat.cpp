/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:21 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:24:04 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong cat")
{
	std::cout << "Default WrongCat class constructor was called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor was called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor was called" << std::endl;
	*this = src;
}

WrongCat & WrongCat::operator=(const WrongCat & src)
{
	std::cout << "WrongCat assignment operator was called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}
