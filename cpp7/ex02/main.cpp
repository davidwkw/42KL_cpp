/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:13 by kwang             #+#    #+#             */
/*   Updated: 2022/04/04 17:20:34 by kwang            ###   ########.fr       */
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

// #include <iostream>
// #include <cstdlib>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
