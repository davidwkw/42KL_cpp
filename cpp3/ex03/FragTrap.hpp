/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:11 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 12:57:52 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap(void);

	public:
		FragTrap(std::string const name);
		FragTrap(const FragTrap & src);
		~FragTrap(void);
		FragTrap & operator=(const FragTrap & src);

		void highFivesGuys(void);
};

#endif
