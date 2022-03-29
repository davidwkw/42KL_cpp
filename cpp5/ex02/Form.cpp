/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:42 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 23:54:01 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("No name"), _sign_grade(50), _exec_grade(50), _sign(false) {}

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade), _sign(false)
{
	if (this->_exec_grade < 1 || this->_sign_grade < 1)
		throw Form::GradeTooHighException();
	else if (this->_exec_grade > 150 || this->_sign_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & src) : _name(src._name), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	*this = src;
}

Form::~Form(void) {}

Form & Form::operator=(const Form & src)
{
	if (this != &src)
		this->_sign = src._sign;
	return (*this);
}

bool Form::getSign(void) const
{
	return (this->_sign);
}

const std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void Form::setSign(bool val)
{
	this->_sign = val;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << "Name: " <<  rhs.getName() << " "
	  << "Sign grade: " << rhs.getSignGrade() << " "
	  << "Exec grade: " << rhs.getExecGrade() << " "
	  << "Sign status: " << rhs.getSign();
	return (o);
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->_sign = true;
}
