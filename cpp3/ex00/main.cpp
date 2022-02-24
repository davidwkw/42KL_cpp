/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:04 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:07:05 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
