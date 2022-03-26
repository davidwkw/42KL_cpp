/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:05 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 00:24:42 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int const DiamondTrap::_init_hp = FragTrap::_init_hp;
int const DiamondTrap::_init_ep = ScavTrap::_init_ep;
int const DiamondTrap::_init_dmg = FragTrap::_init_dmg;

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->_hitPoints = DiamondTrap::_init_hp;
	this->_energyPoints = DiamondTrap::_init_ep;
	this->_atkDmg = DiamondTrap::_init_dmg;
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
	this->_hitPoints = DiamondTrap::_init_hp;
	this->_energyPoints = DiamondTrap::_init_ep;
	this->_atkDmg = DiamondTrap::_init_dmg;
	std::cout << "DiamondTrap " << this->_name << " was created with " << this->_hitPoints << " hp, "
			  << this->_energyPoints << " energy points, and " << this->_atkDmg << " attack damage"
			  << std::endl;
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
