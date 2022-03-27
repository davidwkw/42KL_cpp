/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:49 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:29:06 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Default animal class constructor was called" << std::endl;
}

Animal::Animal(std::string const type) : _type(type)
{
	std::cout << "Parameterised animal class constructor was called" << std::endl;
}

Animal::Animal(const Animal & src)
{
	std::cout << "Animal copy constructor was called" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor was called" << std::endl;
}

Animal & Animal::operator=(const Animal & src)
{
	std::cout << "Animal assignment operator was called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
