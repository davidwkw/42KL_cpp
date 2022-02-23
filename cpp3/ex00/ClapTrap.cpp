#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _atkDmg(0)
{
	std::cout << "ClapTrap " << this->_name << " was created\n";
}

ClapTrap::ClapTrap(const ClapTrap & src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _atkDmg(src._atkDmg)
{
	std::cout << "ClapTrap " << this->_name << " was copied\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destroyed\n";
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

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
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

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_atkDmg << " points of damage!\n";
		this->_energyPoints-= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " was attacked, receiving " << amount << " points of damage!\n";
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " was repaired for " << amount << " points of damage\n";
		this->_hitPoints += amount;
		this->_energyPoints-= 1;
	}
}
