/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:15 by kwang             #+#    #+#             */
/*   Updated: 2022/03/29 12:34:34 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5), _target("") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : Form("Presidential Pardon Form", 25, 5), _target(src._target)
{
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
	if (this != &src)
	{
		this->setSign(src.getSign());
	}
	return (*this);
}

const std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat & bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getSign())
		throw Form::FormNotSignedException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
