/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:17 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:18 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Wrong animal")
{
	std::cout << "Default WrongAnimal class constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "WrongAnimal copy constructor was called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor was called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & src)
{
	std::cout << "WrongAnimal assignment operator was called" << std::endl;
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "*Wrong animal sounds*" << std::endl;
}
