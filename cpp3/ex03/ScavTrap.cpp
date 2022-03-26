/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:52 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 23:45:26 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int const ScavTrap::_init_hp = 100;
int const ScavTrap::_init_ep = 50;
int const ScavTrap::_init_dmg = 20;

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoints = ScavTrap::_init_hp;
	this->_energyPoints = ScavTrap::_init_ep;
	this->_atkDmg = ScavTrap::_init_dmg;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = ScavTrap::_init_hp;
	this->_energyPoints = ScavTrap::_init_ep;
	this->_atkDmg = ScavTrap::_init_dmg;
	std::cout << "ScavTrap " << this->_name << " was created with " << this->_hitPoints << " hp, "
			  << this->_energyPoints << " energy points, and " << this->_atkDmg << " attack damage"
			  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " was copied" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " was destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_atkDmg = src._atkDmg;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atkDmg << " points of damage!" << std::endl;
		this->_energyPoints-= 1;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
