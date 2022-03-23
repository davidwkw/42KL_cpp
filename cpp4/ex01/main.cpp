/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:46 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:16 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	Animal * animal[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal[i] = new Cat;
		else
			animal[i] = new Dog;
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete animal[i];

	std::cout << std::endl;

	Dog dog1;
	dog1.getBrain()->setIdea("I am a good doggo", 0);
	Dog dog2 = dog1;
	std::cout << "Dog1: " << dog1.getBrain()->getIdea(0) << "\n";
	std::cout << "Dog2: " << dog2.getBrain()->getIdea(0) << "\n";
	dog1.getBrain()->setIdea("I am now a bad doggo", 0);
	std::cout << "Dog1: " << dog1.getBrain()->getIdea(0) << "\n";
	std::cout << "Dog2: " << dog2.getBrain()->getIdea(0) << "\n";

	return 0;
}
