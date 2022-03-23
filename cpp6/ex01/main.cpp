/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:37 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:32:39 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct s_data
{
	std::string str_data;
	char char_data;
	int	integer_data;
	float float_data;
	double double_data;
	bool bool_data;
}	Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

std::ostream & operator<<(std::ostream &o, Data const &data)
{
	o << "str: " << data.str_data << '\n'
				 << "char: " << data.char_data << '\n'
				 << "int: " << data.integer_data << '\n'
				 << "float: " << data.float_data << '\n'
				 << "double: " << data.double_data << '\n'
				 << "bool: " << (data.bool_data ? "true" : "false");
	return (o);
}

int	main(void)
{
	std::cout << "-----Initial unserialized-----" << "\n\n";
	Data test_data = {
		"Hello World",
		'a',
		69,
		69.420,
		69.4201337,
		true
	};

	std::cout << test_data << "\n\n";
	uintptr_t ptr = serialize(&test_data);
	Data *reserialized = deserialize(ptr);
	std::cout << "-----Subsequent deserialized-----" << "\n\n";
	std::cout << *reserialized << '\n';


	return (0);
}
