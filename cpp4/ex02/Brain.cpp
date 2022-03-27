/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:30 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:29:31 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _ideas()
{
	std::cout << "Brain's default constructor is called" << std::endl;
}

Brain::Brain(const Brain & src) : _ideas()
{
	std::cout << "Brain's copy constructor is called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain's default destructor is called" << std::endl;
}

Brain & Brain::operator=(const Brain & src)
{
	std::cout << "Brain's assignment operator is called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src.getIdea(i);
	}
	return (*this);
}

std::string Brain::getIdea(size_t const index) const
{
	return (this->_ideas[index]);
}

void Brain::setIdea(std::string const str, size_t const index)
{
	this->_ideas[index] = str;
}
