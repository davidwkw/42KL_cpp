/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:08:18 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:08:19 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP

# define KAREN_HPP
# include <string>
# include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

typedef	struct s_karen_lookup
{
	std::string command;
	void	(Karen::*f)(void);
}	t_karen_lookup;

#endif
