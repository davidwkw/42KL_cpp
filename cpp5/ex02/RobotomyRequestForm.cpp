/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:56 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 23:57:32 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request Form", 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : Form("Robotomy Request Form", 72, 45), _target(src._target)
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
	if (this != &src)
		this->setSign(src.getSign());
	return (*this);
}

const std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (!this->getSign())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();

	int risk;

	srand((unsigned) std::time(NULL));
	risk = rand() % 1;
	if (risk == 1)
		std::cout << "*Drill noises*. " << this->_target << " has been robotomized successfully.";
	else
		std::cout << "The robotomy on " << this->_target << " has failed.";
	std::cout << std::endl;
}
