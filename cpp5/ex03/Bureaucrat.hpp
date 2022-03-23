/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:59 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:33:01 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat & src);
		~Bureaucrat(void);
		Bureaucrat & operator=(const Bureaucrat & src);

		const std::string getName(void) const;
		int getGrade(void) const;
		void increment(void);
		void decrement(void);
		void signForm(Form & form) const;
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
