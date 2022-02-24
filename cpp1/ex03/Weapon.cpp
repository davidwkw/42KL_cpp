/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:48 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:08:49 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type)
{
	return;
}

const std::string &Weapon::getType(void) const
{
	const std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType(std::string input)
{
	this->_type = input;
}
