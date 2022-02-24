/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:10 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:08:11 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	int	level_num = -1;

	if (argc != 2)
	{
		std::cout << "Usage: <message level>" << std::endl;
		return (1);
	}
	Karen karen;
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i].compare(argv[1]) == 0)
			level_num = i;
	}
	switch (level_num)
	{
		case 0:
			karen.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			karen.complain("INFO");
			std::cout << std::endl;
		case 2:
			karen.complain("WARNING");
			std::cout << std::endl;
		case 3:
			karen.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
