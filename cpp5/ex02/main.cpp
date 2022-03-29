/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:46 by kwang             #+#    #+#             */
/*   Updated: 2022/03/29 13:35:40 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat high_grade("high_grade", 1);
	Bureaucrat low_grade("low_grade", 150);

	std::cout << high_grade << '\n';
	std::cout << low_grade << '\n';

	std::cout << "Normal form execution tests:" << "\n\n";
	std::cout << "ShrubForm test:" << '\n';
	try
	{
		ShrubberyCreationForm shrubForm("PresidentialGarden");

		high_grade.signForm(shrubForm);
		std::cout << '\n';
		high_grade.executeForm(shrubForm);
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';
	std::cout << "RobotomyForm test:" << '\n';
	try
	{
		RobotomyRequestForm robotomyForm("Elon Musk");

		high_grade.signForm(robotomyForm);
		std::cout << '\n';
		high_grade.executeForm(robotomyForm);
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';
	std::cout << "PresidentialPardonForm test:" << '\n';
	try
	{
		PresidentialPardonForm pardonForm("Mango Mussolini");

		high_grade.signForm(pardonForm);
		std::cout << '\n';
		high_grade.executeForm(pardonForm);
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';

	std::cout << "Unsigned form execution test:"<< '\n';
	try
	{
		RobotomyRequestForm unsignedForm("Mark Zuckerberg");

		high_grade.executeForm(unsignedForm);
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';

	std::cout << "Insufficient grade test:"<< '\n';
	try
	{
		PresidentialPardonForm presidentialForm("Adam");

		low_grade.signForm(presidentialForm);
		low_grade.executeForm(presidentialForm);
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	return 0;
}
