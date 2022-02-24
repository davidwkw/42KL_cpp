/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:05 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:06:06 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(src._name), FragTrap(src._name), ScavTrap(src._name)
{
	std::cout << "DiamondTrap " << this->_name << " was copied" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(const std::string name) : FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_atkDmg = FragTrap::_atkDmg;
	std::cout << "DiamondTrap " << this->_name << " was created" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " was destroyed" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & src)
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_atkDmg = src.getAtkDmg();
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap's regular name is " << this->_name << "\n"
			  << "DiamondTrap's ClapTrap name is " << ClapTrap::_name << std::endl;
}
