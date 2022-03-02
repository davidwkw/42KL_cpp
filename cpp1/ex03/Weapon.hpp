/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:50 by kwang             #+#    #+#             */
/*   Updated: 2022/03/02 13:29:09 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(void);
		Weapon(const std::string type);

		const std::string &getType(void) const;
		void setType(std::string input);
};

#endif
