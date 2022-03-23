/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:47 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:47 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("Materia"){}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria & src)
{
	*this = src;
}

AMateria & AMateria::operator=(const AMateria & src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

AMateria::~AMateria(void){}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "*Unknown materia affects " << target.getName() <<" *" << std::endl;
}
