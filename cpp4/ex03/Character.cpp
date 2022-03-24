/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:50 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 23:02:40 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter(), _inventory() {}

Character::Character(const std::string name) : ICharacter(), _name(name), _inventory() {}

Character::Character(const Character & src) : ICharacter(), _inventory()
{
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete  this->_inventory[i];
	}
}

Character & Character::operator=(const Character & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			if (this->_inventory == NULL)
			{
				if (src.getInventory(i) != NULL)
					this->_inventory[i] = src.getInventory(i)->clone();
			}
		}
	}
	return (*this);
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}

AMateria * Character::getInventory(size_t index) const
{
	return (this->_inventory[index]);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
}
