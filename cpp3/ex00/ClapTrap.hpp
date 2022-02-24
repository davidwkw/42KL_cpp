/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:07 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:07:08 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int _atkDmg;

	protected:
		ClapTrap(void);
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & src);
		~ClapTrap(void);

		ClapTrap & operator=(const ClapTrap & src);

		std::string	getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAtkDmg(void) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
