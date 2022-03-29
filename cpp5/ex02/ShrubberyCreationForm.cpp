/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:58 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 23:57:40 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation Form", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : Form("Shrubbery Creation Form", 145, 137), _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
	if (this != &src)
	{
		this->setSign(src.getSign());
	}
	return (*this);
}

const std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (!this->getSign())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();

	std::ofstream	outfile;

	outfile.open((this->_target + "_shrubbery").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Failed to open " << this->_target + "_shrubbery" << "\n";
		return;
	}
	outfile << "       _-_\n"
    		   "	 /~~     ~~\\\n"
			   "  /~~       ~~\\\n"
			   " {             }\n"
			   "  \\  _-     -_/\n"
			   "   ~  \\\\ //  ~\n"
			   "_- -   | | _- _\n"
			   "  _ -  | |   -_\n"
			   "      // \\\\\n";
	std::cout << this->_target + "_shrubbery" << " has been created in the directory." << std::endl;
	outfile.close();
}
