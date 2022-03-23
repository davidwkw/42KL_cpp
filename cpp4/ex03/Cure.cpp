/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:52 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:52 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	this->type = "cure";
}

Cure::Cure(const Cure & src) : AMateria()
{
	*this = src;
}

Cure::~Cure(void){}

Cure & Cure::operator=(const Cure & src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << this->type <<  " * heals " << target.getName() << "’s wounds *" << std::endl;
}
