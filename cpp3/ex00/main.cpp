#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap og_bot("Billy Bob");

	og_bot.attack("bot boi");
	std::cout << og_bot.getName() << "'s energy points left: " << og_bot.getEnergyPoints() << "\n";
	og_bot.takeDamage(5);
	std::cout << og_bot.getName() << "'s hitpoints left: " << og_bot.getHitPoints() << "\n";
	og_bot.beRepaired(5);
	std::cout << og_bot.getName() << "'s hitpoints left: " << og_bot.getHitPoints() << "\n";
	std::cout << og_bot.getName() << "'s energy points left: " << og_bot.getEnergyPoints() << "\n";
	return (0);
}
