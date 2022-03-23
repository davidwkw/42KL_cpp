/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:46 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:34:55 by kwang            ###   ########.fr       */
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
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl;

	const WrongAnimal * wrong_cat_animal = new WrongAnimal();
	const WrongCat * wrong_cat_cat = new WrongCat();
	std::cout << wrong_cat_animal->getType() << std::endl;
	std::cout << wrong_cat_cat->getType() << std::endl;
	wrong_cat_animal->makeSound();
	wrong_cat_cat->makeSound();
	delete wrong_cat_animal;
	delete wrong_cat_cat;
	return 0;
}
