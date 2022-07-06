/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:30:06 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:30:10 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
	std::cout << "Testing mutantstack..\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "The element at the top of the stack is: " << mstack.top() << std::endl;
	std::cout << "The current size of the stack is: " << mstack.size() << std::endl;
	std::cout << "Popping off an element from the stack" << std::endl;
	mstack.pop();
	std::cout << "The current size of the stack is: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "Testing list..\n";
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "The element at the back of the list is: " << list.back() << std::endl;
	std::cout << "The size of the list is: " << list.size() << std::endl;
	std::cout << "Popping off and element from the back of the list" << std::endl;
	list.pop_back();
	std::cout << "The size of the list is: " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator lit = list.begin();
	std::list<int>::iterator lite = list.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	return 0;
}
