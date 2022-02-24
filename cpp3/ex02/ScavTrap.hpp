/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:23 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:06:24 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		ScavTrap(void);

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap(void);
		ScavTrap & operator=(const ScavTrap & src);

		void attack(const std::string& target);
		void guardGate(void);
};

#endif
