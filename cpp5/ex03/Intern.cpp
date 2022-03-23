/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:06 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:33:08 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern & src)
{
	*this = src;
}

Intern::~Intern(void) {}

Intern & Intern::operator=(const Intern & src)
{
	(void) src;
	return (*this);
}

Form * Intern::makeForm(const std::string form_name, const std::string target)
{
	int i;
	Form * form;

	const std::string forms[] = {
		"presidental pardon",
		"robotomy request",
		"shrubbery creation",
	};

	for (i = 0; i < 4; i++)
	{
		if (form_name.compare(forms[i]) == 0)
			break;
	}

	switch(i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			throw Form::FormDoesNotExistException();
			break;
	}
	std::cout << "Intern creates " << form_name << " form" << std::endl;
	return (form);
}
