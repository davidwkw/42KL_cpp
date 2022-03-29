/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:34:00 by kwang             #+#    #+#             */
/*   Updated: 2022/03/28 01:00:17 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP
# include <fstream>
# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		const std::string _target;
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);

		const std::string getTarget(void) const;

		void execute(const Bureaucrat & bureaucrat)  const;
};

#endif
