/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:09 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:09 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain & src);
		~Brain(void);
		Brain & operator=(const Brain & src);

		std::string getIdea(size_t index) const;
		void setIdea(std::string str, size_t index);
};

#endif
