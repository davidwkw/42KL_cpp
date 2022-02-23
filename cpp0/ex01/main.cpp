/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:10 by kwang             #+#    #+#             */
/*   Updated: 2022/02/23 13:35:34 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <climits>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Basic Phonebook\n";
		std::cout << "Select (ADD / SEARCH / EXIT): ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.search_contacts();
		else if (input.compare("EXIT") == 0)
			break;
		input = "";
	}
	return (0);
}
