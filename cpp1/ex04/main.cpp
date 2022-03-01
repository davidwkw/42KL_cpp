/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:26 by kwang             #+#    #+#             */
/*   Updated: 2022/02/28 18:28:20 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv)
{
	size_t			pos;
	std::string		buffer;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
	{
		std::cout << "Usage: ./replacement <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	if (std::strlen(argv[1]) == 0)
	{
		std::cout << "Invalid filename\n";
		return (1);
	}
	if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cout << "No strings given\n";
		return (1);
	}
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "Failed to open " << argv[1] << "\n";
		return (1);
	}
	outfile.open(std::string(argv[1]).append(".replace").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Failed to open " << std::string(argv[1]).append(".replace") << "\n";
		return (1);
	}
	while (std::getline(infile, buffer))
	{
		pos = 0;
		while ((pos = buffer.find(argv[2])) != std::string::npos)
		{
			buffer.erase(pos, std::strlen(argv[2]));
			buffer.insert(pos, argv[3]);
		}
		outfile << buffer << "\n";
	}
	infile.close();
	outfile.close();
	return (0);
}
