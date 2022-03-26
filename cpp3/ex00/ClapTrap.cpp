/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:09 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 23:39:56 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int const ClapTrap::_init_hp = 10;
int const ClapTrap::_init_ep = 10;
int const ClapTrap::_init_dmg = 0;

ClapTrap::ClapTrap(void) : _hitPoints(ClapTrap::_init_hp), _energyPoints(ClapTrap::_init_ep), _atkDmg(ClapTrap::_init_dmg)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(ClapTrap::_init_hp), _energyPoints(ClapTrap::_init_ep), _atkDmg(ClapTrap::_init_dmg)
{
	std::cout << "ClapTrap " << this->_name << " was created with " << this->_hitPoints << " hp, "
			  << this->_energyPoints << " energy points, and " << this->_atkDmg << " attack damage"
			  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _atkDmg(src._atkDmg)
{
	std::cout << "ClapTrap " << this->_name << " was copied" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_atkDmg = src._atkDmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destroyed" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::getAtkDmg(void) const
{
	return (this->_atkDmg);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_atkDmg << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(this->_hitPoints))
		amount = this->_hitPoints;
	std::cout << "ClapTrap " << this->_name << " was attacked, receiving " << amount << " points of damage!" << std::endl;;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		if (this->_hitPoints + amount > ClapTrap::_init_hp)
			amount = ClapTrap::_init_hp - this->_hitPoints;
		std::cout << "ClapTrap " << this->_name << " was repaired for " << amount << " points of damage" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints-= 1;
	}
}
