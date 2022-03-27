/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:10 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:19:28 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain)
{
	std::cout << "Default cat class constructor was called" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(), _brain(new Brain)
{
	std::cout << "Cat copy constructor was called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor was called" << std::endl;
	delete this->_brain;
}

Cat & Cat::operator=(const Cat & src)
{
	std::cout << "Cat assignment operator was called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(src.getBrain()->getIdea(i), i);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~ I'm going to pee on your bed" << std::endl;
}

Brain * Cat::getBrain(void) const
{
	return (this->_brain);
}
