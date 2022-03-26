/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:09 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 21:21:12 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string const name) : ClapTrap()
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_atkDmg = 30;
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap()
{
	std::cout << "FragTrap " << this->_name << " was copied" << std::endl;
	*this = src;
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " was destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests high fives from everyone" << std::endl;
}
