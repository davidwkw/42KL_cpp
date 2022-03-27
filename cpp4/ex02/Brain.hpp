/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:31 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:29:38 by kwang            ###   ########.fr       */
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

		std::string getIdea(size_t const index) const;
		void setIdea(std::string const str, size_t const index);
};

#endif
