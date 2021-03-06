/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:55 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 12:49:35 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "Claptrap tests\n";
	ClapTrap og_bot("Billy Bob");
	og_bot.attack("bot boi");
	std::cout << "Energy points left: " << og_bot.getEnergyPoints() << "\n";
	og_bot.takeDamage(5);
	std::cout << "Hitpoints left: " << og_bot.getHitPoints() << "\n";
	og_bot.beRepaired(5);
	std::cout << "Hitpoints left: " << og_bot.getHitPoints() << "\n";
	std::cout << "Energy points left: " << og_bot.getEnergyPoints() << "\n";

	std::cout << "\nScavtrap tests\n";
	ScavTrap derived_bot("Gandalf");
	derived_bot.attack("Another botboi");
	std::cout << "Energy points left: " << derived_bot.getEnergyPoints() << "\n";
	derived_bot.takeDamage(5);
	std::cout << "Hitpoints left: " << derived_bot.getHitPoints() << "\n";
	derived_bot.beRepaired(5);
	std::cout << "Hitpoints left: " << derived_bot.getHitPoints() << "\n";
	std::cout << "Energy points left: " << derived_bot.getEnergyPoints() << "\n";
	derived_bot.guardGate();
	return (0);
}
