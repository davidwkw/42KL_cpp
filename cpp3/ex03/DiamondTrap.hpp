/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:07 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:06:08 by kwang            ###   ########.fr       */
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
		DiamondTrap(void);

	public:
		DiamondTrap(const DiamondTrap & src);
		DiamondTrap(const std::string name);
		~DiamondTrap(void);
		DiamondTrap & operator=(const DiamondTrap & src);

		void whoAmI(void);
};

#endif
