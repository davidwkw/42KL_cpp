/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:46 by kwang             #+#    #+#             */
/*   Updated: 2022/02/28 17:13:30 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main(void)
{
	int num;

	num = 10;
	Animal animals[num];
	for (int i = 0; i < num; i++)
	{
		if (i < num / 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;

	}
	return 0;
}
