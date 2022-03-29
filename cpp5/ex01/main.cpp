/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:34:27 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 23:18:46 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	std::cout << "Form creation tests: " << '\n';
	std::cout << "Valid form: " << '\n';
	try
	{
		std::cout << "form('Contract', 69, 96)" << '\n';
		Form form("Contract", 69, 96);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';

	std::cout << "Invalid sign grade: " << '\n';
	try
	{
		std::cout << "form('Contract', 0, 120)" << '\n';
		Form form("Contract", 0, 120);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';

	std::cout << "Invalid exec grade: " << '\n';
	try
	{
		std::cout << "form('Contract', 0, 1337)" << '\n';
		Form form("Contract", 2, 1337);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';

	std::cout << "Form signing test" << '\n';
	Bureaucrat politician("Bernard", 42);
	std::cout << politician << " created \n";
	std::cout << "Normal form: " << '\n';
	try
	{
		Form form("Treaty", 69, 96);
		std::cout << politician.getName() << " tries to sign form " << form.getName() << '\n';
		std::cout << form << "\n";
		politician.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';

	std::cout << "Insufficient sign grade: " << '\n';
	try
	{
		Form form2("Contract", 10, 43);
		std::cout << politician.getName() << " tries to sign form " << form2.getName() << '\n';
		std::cout << form2 << "\n";
		politician.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}
