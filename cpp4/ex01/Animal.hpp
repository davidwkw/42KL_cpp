/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:52 by kwang             #+#    #+#             */
/*   Updated: 2022/03/27 11:06:41 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(std::string const type);
		Animal(const Animal & src);
		virtual ~Animal(void);
		Animal & operator=(const Animal & src);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
