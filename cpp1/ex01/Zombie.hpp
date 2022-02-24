/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:09:05 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:09:06 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		~Zombie(void);
		void 	announce(void) const;
		void	setName(const std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
