/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:26 by kwang             #+#    #+#             */
/*   Updated: 2022/02/16 14:38:42 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	is_string_ws(const std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if (std::isspace((char)str[i]) == 0)
			return (false);
	}
	return (true);
}

std::string ft_str_resize(const std::string str, size_t max_size, char c)
{
	std::string output;

	output = str;
	if (output.size() > max_size)
	{
		output.resize(max_size - 1);
		output.push_back(c);
	}
	return (output);
}
