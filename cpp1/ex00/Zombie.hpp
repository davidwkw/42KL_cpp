/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:09:21 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:09:22 by kwang            ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
		void 		announce(void) const;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
