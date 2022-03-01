/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:16 by kwang             #+#    #+#             */
/*   Updated: 2022/02/28 18:10:41 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n"
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
			  << "I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]\n"
			  << "I cannot believe adding extra bacon costs more money.\n"
			  << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]\n"
			  << "I think I deserve to have some extra bacon for free.\n"
			  << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]\n"
			  << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	t_karen_lookup karen_lookup_table[4] = {
		{"INFO", &Karen::info},
		{"DEBUG", &Karen::debug},
		{"WARNING", &Karen::warning},
		{"ERROR", &Karen::error}
	};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(karen_lookup_table[i].command) == 0)
		{
			(this->*(karen_lookup_table[i].f))();
			break;
		}
	}
}
