/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:36 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 00:03:14 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		static int const _init_hp;
		static int const _init_ep;
		static int const _init_dmg;
		FragTrap(void);

	public:
		FragTrap(std::string const name);
		FragTrap(const FragTrap & src);
		~FragTrap(void);
		FragTrap & operator=(const FragTrap & src);

		void highFivesGuys(void);
};

#endif
