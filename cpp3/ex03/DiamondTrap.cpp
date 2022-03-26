/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:05 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 21:23:54 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap " << this->_name << " was copied" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	this->_name = name;
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
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_atkDmg = src._atkDmg;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap's regular name is " << this->_name << "\n"
			  << "DiamondTrap's ClapTrap name is " << ClapTrap::_name << std::endl;
}
