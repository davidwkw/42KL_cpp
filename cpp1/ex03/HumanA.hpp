/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:38 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:08:39 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon		&_weapon;
	public:
		HumanA(const std::string name, Weapon &weapon);
		void	attack(void);
};

#endif
