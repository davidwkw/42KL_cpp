/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:07 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 00:20:47 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;

	protected:
		static int const _init_hp;
		static int const _init_ep;
		static int const _init_dmg;
		DiamondTrap(void);

	public:
		DiamondTrap(const DiamondTrap & src);
		DiamondTrap(std::string const name);
		~DiamondTrap(void);
		DiamondTrap & operator=(const DiamondTrap & src);

		void whoAmI(void);
};

#endif
