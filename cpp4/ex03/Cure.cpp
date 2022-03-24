/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:52 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 15:50:17 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	this->_type = "cure";
}

Cure::Cure(const Cure & src) : AMateria()
{
	*this = src;
}

Cure::~Cure(void){}

Cure & Cure::operator=(const Cure & src)
{
	(void)src;
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << " * heals " << target.getName() << "’s wounds *" << std::endl;
}
