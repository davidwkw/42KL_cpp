/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:25 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 21:21:03 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_atkDmg = 20;
	std::cout << "ScavTrap " << this->_name << " was created" << std::endl;
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
