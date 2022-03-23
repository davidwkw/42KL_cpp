/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:34:34 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:34:35 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat1("Jerome Powell", 20);
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureaucrat2("Jerome Powell", 169);
		std::cout << bureaucrat2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureaucrat3("Joe Biden", 150);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.decrement();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bureaucrat4("Donald Trump", 1);
		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.increment();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
