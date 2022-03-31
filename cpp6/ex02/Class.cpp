/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:28 by kwang             #+#    #+#             */
/*   Updated: 2022/03/31 13:22:15 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base::~Base(void) {}

Base *generate(void)
{
	Base *ret_ptr;
	srand(time(NULL));
	int random_num = rand() % 3;
	switch (random_num)
	{
		case 0:
			ret_ptr = new A;
			std::cout << "Object of class A was generated" << std::endl;
			break;
		case 1:
			ret_ptr = new B;
			std::cout << "Object of class B was generated" << std::endl;
			break;
		case 2:
			ret_ptr = new C;
			std::cout << "Object of class C was generated" << std::endl;
			break;
		default:
			break;
	}
	return (ret_ptr);
}

void identify(Base* p)
{
	A* a;
	B* b;
	C* c;

	if ((a = dynamic_cast<A*>(p)) != NULL)
	{
		std::cout << "Object is of class A type" << std::endl;
	}
	else if ((b = dynamic_cast<B*>(p)) != NULL)
	{
		std::cout << "Object is of class B type" << std::endl;
	}
	else if ((c = dynamic_cast<C*>(p)) != NULL)
	{
		std::cout << "Object is of class C type" << std::endl;
	}
	else
		std::cout << "Object is of an unknown type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "Object is of class A type" << std::endl;
		return;
	}
	catch (std::exception const &e)
	{
	}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "Object is of class B type" << std::endl;
		return;
	}
	catch (std::exception const &e)
	{
	}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Object is of class C type" << std::endl;
		return;
	}
	catch (std::exception const &e)
	{
	}
}
