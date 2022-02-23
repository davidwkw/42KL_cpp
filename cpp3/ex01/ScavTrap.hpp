#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int _atkDmg;

	protected:
		ScavTrap(void);

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap(void);
		ScavTrap & operator=(const ScavTrap & src);

		void attack(const std::string& target);
		void guardGate(void);
};

#endif