#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap bot("Billy Bob");

	bot.attack("Claptrap");
	std::cout << "Energy points left: " << bot.getEnergyPoints() << "\n";
	bot.takeDamage(5);
	std::cout << "Hitpoints left: " << bot.getHitPoints() << "\n";
	bot.beRepaired(5);
	std::cout << "Hitpoints left: " << bot.getHitPoints() << "\n";
	std::cout << "Energy points left: " << bot.getEnergyPoints() << "\n";
	return (0);
}
