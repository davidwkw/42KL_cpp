/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:16 by kwang             #+#    #+#             */
/*   Updated: 2022/02/15 18:58:17 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : contacts(), _index(0)
{
	return;
}

void	PhoneBook::add_contact(void)
{
	this->contacts[this->_index].prompt_create_contact();
	this->_index = (this->_index + 1) % 8;
}

void	PhoneBook::display_contacts(void)
{
	std::cout << "Index" << std::setw(5) << "|"
			  << "First name" << "|"
			  << "Last name" << std::setw(1) << "|"
			  << "Nickname" << std::setw(2) << "\n";
	for (int i = 0; i < this->_index ; i++)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << ft_str_resize(this->contacts[i].get_first_name(), 10, '.') << "|"
				  << std::setw(10) << ft_str_resize(this->contacts[i].get_last_name(), 10, '.') << "|"
				  << std::setw(10) << ft_str_resize(this->contacts[i].get_nickname(), 10, '.') << "\n";
	}
}

void	PhoneBook::search_contacts(void)
{
	int	index;

	this->display_contacts();
	std::cout << "Input index: ";
	std::cin >> index;
	if (index < 0 || index > 7 )
		std::cout << "Index is out of range. Please select an index between 0-7\n";
	else if (index >= this->_index)
		std::cout << "No contact saved in that index\n";
	else
	{
		std::cout << "First name: " << this->contacts[index].get_first_name() << "\n"
				<< "Last name: " << this->contacts[index].get_last_name() << "\n"
				<< "Nickname: "  << this->contacts[index].get_nickname() << "\n"
				<< "Phone number: " << this->contacts[index].get_phone_number() << "\n"
				<< "Darkest secret: " << this->contacts[index].get_darkest_secret() << std::endl;
	}
	std::cin.ignore();
}
