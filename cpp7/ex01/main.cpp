/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:31:25 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:31:26 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T & val) {
	std::cout << val;
}

void increment(int & val) {
	val++;
}

int main(void)
{
	int int_arr[] = {0,1,2,3,4,5,6,7,8,9};
	std::string str_arr[] = {"Hello ", "World ", "Green ", "Eggs ", "And ", "Ham ", "Foo ", "Bar ", "Monty ", "Python "};

	print("Elements of int array: \n");
	iter(int_arr, 10, print);
	print("\n");
	print("Elements of string array: \n");
	iter(str_arr, 10, print);
	print("\n");
	print("Incrementing all elements of int_arr by 1\n");
	iter(int_arr, 10, increment);
	print("Elements of int array: \n");
	iter(int_arr, 10, print);
	print("\n");
	return 0;
}
