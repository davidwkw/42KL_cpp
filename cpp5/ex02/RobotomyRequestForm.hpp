/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:33:57 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:33:58 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP
#include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		const std::string _target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & src);
		~RobotomyRequestForm(void);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & src);

		const std::string getTarget(void) const;

		void execute(const Bureaucrat & bureaucrat) const;
};

#endif
