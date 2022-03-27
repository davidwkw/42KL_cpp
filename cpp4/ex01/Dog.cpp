/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:12 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:19:33 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain)
{
	std::cout << "Default dog class constructor was called" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(), _brain(new Brain)
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor was called" << std::endl;
	delete this->_brain;
}

Dog & Dog::operator=(const Dog & src)
{
	std::cout << "Dog assignment operator was called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(src.getBrain()->getIdea(i), i);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof I'm a good boi. I demand the headpats" << std::endl;
}

Brain * Dog::getBrain(void) const
{
	return (this->_brain);
}
