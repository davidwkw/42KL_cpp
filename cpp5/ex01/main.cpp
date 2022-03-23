/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:34:27 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:34:27 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

void	print(std::string str)
{
	std::cout << str << "\n";
}

void	print_nonl(std::string str)
{
	std::cout << str ;
}

int main()
{
	print("====FORM CREATION TESTS===");
	print("form('name', 2,2) : ");
	Form test("name",2,2);
	std::cout << test;
	print("");print("");

	try
	{
		print("form('name', 0, 2)");
		Form test("name",0,2);
	}
	catch(const std::exception& e)
	{
		print(e.what());
	}

	print("");
	try
	{
		print("form('name', 2, 1234)");
		Form test("name",2, 1234);
	}
	catch(const std::exception& e)
	{
		print(e.what());
	}

	print("==========================");

	print("");

	print("====FORM SIGNING TESTS===");
	Bureaucrat crat("john", 69);
	std::cout << crat << " created \n";

	print("");
	Form test2("name", 70, 12);
	print("john signs Form('name', 70, 12)");
	std::cout << test2 << "\n";
	crat.signForm(test2);

	print("");
	Form test1("name", 69, 12);
	print("john signs Form('name', 69, 12)");
	std::cout << test1 << "\n";
	crat.signForm(test1);

	try
	{
		print("");
		Form test3("name", 68, 12);
		print("john signs Form('name', 68, 12)");
		std::cout << test3 << "\n";
		crat.signForm(test3);	
	}
	catch(const std::exception& e)
	{
		print(e.what());
	}
	
	print("");
	Form test4("name", 70, 12);
	print("Form('name', 70, 12) besigned by john");
	std::cout << test4 << "\n";
	try
	{
		test4.beSigned(crat);
	}
	catch(const std::exception& e)
	{
		print(e.what());
	}
	print("==========================");

	return 0;
}
