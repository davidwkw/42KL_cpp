#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _atkDmg(20)
{
	std::cout << "ScavTrap " << this->_name << " was created\n";
	return;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(), _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _atkDmg(src._atkDmg)
{
	std::cout << "ScavTrap " << this->_name << " was copied\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " was destroyed\n";
}

ScavTrap & ScavTrap::operator=(const ScavTrap & src)
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

void ScavTrap::attack(const std::string& target)
{
		if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " , causing " << this->_atkDmg << " points of damage!\n";
		this->_energyPoints-= 1;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now Gate keeper mode\n";
}
