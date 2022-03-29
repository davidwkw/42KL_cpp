/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:10 by kwang             #+#    #+#             */
/*   Updated: 2022/03/29 13:48:06 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include  "Intern.hpp"

int main()
{
	Bureaucrat high_grade("high_grade", 1);
	Bureaucrat low_grade("low_grade", 150);
	Intern intern;

	std::cout << high_grade << '\n';
	std::cout << low_grade << '\n';

	std::cout << "Normal form execution tests:" << "\n\n";
	std::cout << "ShrubForm test:" << '\n';
	try
	{
		Form *shrubForm = intern.makeForm("shrubbery creation", "PresidentialGarden");
		high_grade.signForm(*shrubForm);
		std::cout << '\n';
		high_grade.executeForm(*shrubForm);
		delete shrubForm;
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';
	std::cout << "RobotomyForm test:" << '\n';
	try
	{
		Form *robotomyForm = intern.makeForm("robotomy request", "Elon Musk");
		high_grade.signForm(*robotomyForm);
		std::cout << '\n';
		high_grade.executeForm(*robotomyForm);
		delete robotomyForm;
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';
	std::cout << "PresidentialPardonForm test:" << '\n';
	try
	{
		Form *pardonForm = intern.makeForm("presidential pardon", "Mango Mussolini");
		high_grade.signForm(*pardonForm);
		std::cout << '\n';
		high_grade.executeForm(*pardonForm);
		delete pardonForm;
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';

	std::cout << "Unsigned form execution test:"<< '\n';
	try
	{
		Form *unsignedForm = intern.makeForm("presidential pardon", "Mango Mussolini");
		high_grade.executeForm(*unsignedForm);
		delete unsignedForm;
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	std::cout << '\n';

	std::cout << "Unknown form test:"<< '\n';
	try
	{
		Form *fakeForm = intern.makeForm("doesn't exist", "dummy");
		low_grade.signForm(*fakeForm);
		low_grade.executeForm(*fakeForm);
		delete fakeForm;
	}
	catch (const std::exception& e)
	{
		std::cout << "Failed because: " << e.what() << "\n";
	}
	return 0;
}
