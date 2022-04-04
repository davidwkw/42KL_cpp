/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:13 by kwang             #+#    #+#             */
/*   Updated: 2022/04/04 17:08:10 by kwang            ###   ########.fr       */
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
	print("Testing parameterised constructor and value assignment by assigning 0 - 4\n");
	Array<int> arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
		print(arr[i]);
		print('\n');
	}
	print("Testing array creation with 0 size\n");
	Array<int> arr2(0);
	print(&arr2);
	print("\n");
	print("Testing out of index bounds access\n");
	try
	{
		print(arr[10]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	print("Testing size getter\n");
	print(arr.size());
	print('\n');
	print("Testing copy assignment operator\n");
	Array<int> arr3 = arr;
	for (int i = 0; i < 5; i++)
	{
		arr3[i] = i+5;
		print(arr3[i]);
		print('\n');
	}
	print("Printing original array contents\n");
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
		print(arr[i]);
		print('\n');
	}
	return (0);
}
