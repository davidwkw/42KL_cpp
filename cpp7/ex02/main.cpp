/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:13 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:32:14 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
void print(T value)
{
	std::cout << value;
}

int	main(void)
{
	// Array<int> arr;

	// print(arr[0]);

	print("Testing parameterised constructor and value assignement\n");
	Array<int> arr2(5);
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = i;
		print(arr2[i]);
		print('\n');
	}
	print("Testing out of index bounds access\n");
	try
	{
		print(arr2[10]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	print("Testing size getter\n");
	print(arr2.size());
	print('\n');
	print("Testing copy assignment operator\n");
	Array<int> arr3 = arr2;
	for (int i = 0; i < 5; i++)
	{
		arr3[i] = i+5;
		print(arr3[i]);
		print('\n');
	}
	print("Printing original array contents\n");
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = i;
		print(arr2[i]);
		print('\n');
	}
	return (0);
}
