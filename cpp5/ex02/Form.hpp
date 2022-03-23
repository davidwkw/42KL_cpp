/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:44 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:33:45 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const int _sign_grade;
		const int _exec_grade;
		bool _sign;
	public:
		Form(void);
		Form(const Form & src);
		Form(const std::string name, const int sign_grade, const int exec_grade);
		virtual ~Form(void);
		Form & operator=(const Form & src);

		bool getSign(void) const;
		void setSign(bool val);
		const std::string getName(void) const;
		int getExecGrade(void) const;
		int getSignGrade(void) const;

		void beSigned(const Bureaucrat & bureaucrat);
		virtual void execute(const Bureaucrat & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what(void) const throw();
	};

	class FormNotSignedException : public std::exception
	{
		public:
			const char *what(void) const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
