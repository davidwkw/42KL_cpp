/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:34:48 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:06:57 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default cat class constructor was called" << std::endl;
}

Cat::Cat(const Cat & src) : Animal()
{
	std::cout << "Cat copy constructor was called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor was called" << std::endl;
}

Cat & Cat::operator=(const Cat & src)
{
	std::cout << "Cat assignment operator was called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~ I'm going to pee on your bed" << std::endl;
}
