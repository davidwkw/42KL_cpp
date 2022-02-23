/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:02 by kwang             #+#    #+#             */
/*   Updated: 2022/02/23 17:20:21 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::prompt_user_input(const std::string prompt)
{
	std::string	input;

	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	while (input.size() == 0 || is_string_ws(input));
	return (input);
}

void Contact::prompt_create_contact(void)
{
	this->_first_name = this->prompt_user_input("First name: ");
	this->_last_name = this->prompt_user_input("Last name: ");
	this->_nickname = this->prompt_user_input("Nickname: ");
	this->_phone_number = this->prompt_user_input("Phone number: ");
	this->_darkest_secret = this->prompt_user_input("Darkest secret: ");
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}
