/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:36:08 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 21:33:11 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _source() {}

MateriaSource::MateriaSource(const MateriaSource & src) : IMateriaSource(), _source()
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
			delete this->_source[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_source[i] != NULL)
			{
				delete this->_source[i];
				this->_source[i] = NULL;
			}
			if (this->_source == NULL)
			{
				if (src.getSource(i) != NULL)
					this->_source[i] = src.getSource(i)->clone();
			}
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] == NULL) {
			this->_source[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL && this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	}
	return (0);
}

AMateria * MateriaSource::getSource(const size_t index) const
{
	return (this->_source[index]);
}
