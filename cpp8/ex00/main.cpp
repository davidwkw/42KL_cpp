/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:30:32 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:30:43 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int	main()
{
	std::vector<int> vect;
	vect.push_back(69);
	vect.push_back(420);
	vect.push_back(1337);
	std::cout << "Testing vector\n";
	try
	{
		std::vector<int>::iterator it = easyfind< std::vector<int> >(vect, 420);
		std::cout << *it << "\n";
	}
	catch(const ValueNotFoundException& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::deque<int> deq;
	deq.push_back(69);
	deq.push_back(420);
	deq.push_back(1337);
	std::cout << "Testing deque\n";
	try
	{
		std::deque<int>::iterator it = easyfind< std::deque<int> >(deq, 1337);
		std::cout << *it << "\n";
	}
	catch(const ValueNotFoundException& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> lst;
	lst.push_back(69);
	lst.push_back(420);
	lst.push_back(1337);
	std::cout << "Testing list\n";
	try
	{
		std::list<int>::iterator it = easyfind< std::list<int> >(lst, 69);
		std::cout << *it << "\n";
	}
	catch(const ValueNotFoundException& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Testing list with non-locatable value\n";
	try
	{
		std::list<int>::iterator it = easyfind< std::list<int> >(lst, 69420);
		std::cout << *it << "\n";
	}
	catch(const ValueNotFoundException& e)
	{
		std::cerr << e.what() << '\n';
	}


	return 0;
}
