/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:49 by kwang             #+#    #+#             */
/*   Updated: 2022/02/26 23:41:23 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Default animal class constructor was called" << std::endl;
}

Animal::Animal(const Animal & src) : type(src.type)
{
	std::cout << "Animal copy constructor was called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor was called" << std::endl;
}

Animal & Animal::operator=(const Animal & src)
{
	std::cout << "Animal assignment operator was called" << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Ed...ward?" << std::endl;
}
