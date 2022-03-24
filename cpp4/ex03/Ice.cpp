/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:57 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 15:50:11 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	this->_type = "ice";
}

Ice::Ice(const Ice & src) : AMateria()
{
	*this = src;
}

Ice::~Ice(void){}

Ice & Ice::operator=(const Ice & src)
{
	(void)src;
	return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
