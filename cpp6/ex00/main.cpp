/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:44 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:32:46 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Scalar.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "./converter <scalar type>" << std::endl;
		return (1);
	}

	try
	{
		Scalar scalar(argv[1]);
		std::cout << scalar;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
	return (0);
}
