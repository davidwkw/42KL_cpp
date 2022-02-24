/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:59 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:09:00 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(5, "Jim Bob");
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
