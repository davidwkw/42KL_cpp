/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:36:05 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 23:04:57 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "PDF provided tests\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "MateriaSource tests\n";
	MateriaSource* src2 = new MateriaSource();
	std::cout << "MateriaSource learning tests\n";
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	for (int i = 0; i < 2; i++)
		std::cout << "Materia source item at index " << i << " is " << src2->getSource(i)->getType() << '\n';\
	std::cout << "MateriaSource Amateria creation tests\n";
	AMateria* tmp2 = src2->createMateria("ice");
	std::cout << "MateriaSource Amateria cloning tests\n";
	AMateria* tmp3 = tmp2->clone();
	std::cout << "Address of tmp 2 " << tmp2 << '\n';
	std::cout << "Address of tmp 3 " << tmp3 << '\n';
	delete tmp2;
	delete tmp3;

	std::cout << "Character tests\n";
	Character* mc = new Character("Blue");
	Character* subject = new Character("Dummy");
	std::cout << "Character equip tests\n";
	tmp2 = src->createMateria("ice");
	tmp3 = src->createMateria("cure");
	mc->equip(tmp2);
	mc->equip(tmp3);
	for (int i = 0; i < 2; i++)
		std::cout << "mc has " << mc->getInventory(i)->getType() << " equipped at index " << i << '\n';
	std::cout << "Character use tests\n";
	for (int i = 0; i < 2; i++)
		mc->use(i, *subject);
	std::cout << "Character unequip tests\n";
	for (int i = 0; i < 2; i++)
		mc->unequip(i);
	for (int i = 0; i < 2; i++)
		std::cout << "mc has " << (mc->getInventory(i) == NULL ? "nothing" : "something") << " equipped at index " << i << '\n';

	delete tmp2;
	delete tmp3;
	delete src2;
	return 0;
}
