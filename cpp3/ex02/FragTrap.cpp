#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_atkDmg = 30;
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & src)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_atkDmg = src.getAtkDmg();
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src._name)
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
