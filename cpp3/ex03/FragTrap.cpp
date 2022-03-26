/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:38 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 23:55:05 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int const FragTrap::_init_hp = 100;
int const FragTrap::_init_ep = 100;
int const FragTrap::_init_dmg = 30;

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hitPoints = FragTrap::_init_hp;
	this->_energyPoints = FragTrap::_init_ep;
	this->_atkDmg = FragTrap::_init_dmg;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = FragTrap::_init_hp;
	this->_energyPoints = FragTrap::_init_ep;
	this->_atkDmg = FragTrap::_init_dmg;
	std::cout << "FragTrap " << this->_name << " was created with " << this->_hitPoints << " hp, "
			  << this->_energyPoints << " energy points, and " << this->_atkDmg << " attack damage"
			  << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & src)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_atkDmg = src._atkDmg;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap()
{
	std::cout << "FragTrap " << this->_name << " was copied" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " was destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests high fives from everyone" << std::endl;
}
