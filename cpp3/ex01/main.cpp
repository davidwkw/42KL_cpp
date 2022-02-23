#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap og_bot("Billy Bob");

	og_bot.attack("Claptrap");
	std::cout << "Energy points left: " << og_bot.getEnergyPoints() << "\n";
	og_bot.takeDamage(5);
	std::cout << "Hitpoints left: " << og_bot.getHitPoints() << "\n";
	og_bot.beRepaired(5);
	std::cout << "Hitpoints left: " << og_bot.getHitPoints() << "\n";
	std::cout << "Energy points left: " << og_bot.getEnergyPoints() << "\n";

	ScavTrap derived_bot("Gandalf");
	derived_bot.attack("Claptrap");
	std::cout << "Energy points left: " << derived_bot.getEnergyPoints() << "\n";
	derived_bot.takeDamage(5);
	std::cout << "Hitpoints left: " << derived_bot.getHitPoints() << "\n";
	derived_bot.beRepaired(5);
	std::cout << "Hitpoints left: " << derived_bot.getHitPoints() << "\n";
	std::cout << "Energy points left: " << derived_bot.getEnergyPoints() << "\n";
	derived_bot.guardGate();
	return (0);
}
