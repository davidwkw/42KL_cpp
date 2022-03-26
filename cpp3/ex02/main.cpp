/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:28 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 12:55:04 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "Claptrap tests\n";
	ClapTrap og_bot("Billy Bob");
	og_bot.attack("bot boi");
	std::cout << og_bot.getName() << "'s energy points left: " << og_bot.getEnergyPoints() << "\n";
	og_bot.takeDamage(5);
	std::cout << og_bot.getName() << "'s hitpoints left: " << og_bot.getHitPoints() << "\n";
	og_bot.beRepaired(5);
	std::cout << og_bot.getName() << "'s hitpoints left: " << og_bot.getHitPoints() << "\n";
	std::cout << og_bot.getName() << "'s energy points left: " << og_bot.getEnergyPoints() << "\n";

	std::cout << "\nScavtrap tests\n";
	ScavTrap derived_bot("Gandalf");
	derived_bot.attack("Another botboi");
	std::cout << derived_bot.getName() << "'s energy points left: " << derived_bot.getEnergyPoints() << "\n";
	derived_bot.takeDamage(5);
	std::cout << derived_bot.getName() << "'s hitpoints left: " << derived_bot.getHitPoints() << "\n";
	derived_bot.beRepaired(5);
	std::cout << derived_bot.getName() << "'s hitpoints left: " << derived_bot.getHitPoints() << "\n";
	std::cout << derived_bot.getName() << "'s energy points left: " << derived_bot.getEnergyPoints() << "\n";
	derived_bot.guardGate();

	std::cout << "\nFragtrap tests\n";
	FragTrap clone_bot("Tommy");
	clone_bot.attack("Another botboi");
	std::cout << clone_bot.getName() << "'s energy points left: " << clone_bot.getEnergyPoints() << "\n";
	clone_bot.takeDamage(5);
	std::cout << clone_bot.getName() << "'s hitpoints left: " << clone_bot.getHitPoints() << "\n";
	clone_bot.beRepaired(5);
	std::cout << clone_bot.getName() << "'s hitpoints left: " << clone_bot.getHitPoints() << "\n";
	std::cout << clone_bot.getName() << "'s energy points left: " << clone_bot.getEnergyPoints() << "\n";
	clone_bot.highFivesGuys();
	return (0);
}
