/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:06:36 by kwang             #+#    #+#             */
/*   Updated: 2022/03/26 12:50:29 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:
		FragTrap(void);

	public:
		FragTrap(const std::string const name);
		FragTrap(const FragTrap & src);
		~FragTrap(void);
		FragTrap & operator=(const FragTrap & src);

		void highFivesGuys(void);
};

#endif
