/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:52 by kwang             #+#    #+#             */
/*   Updated: 2022/03/02 12:09:46 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal & src);
		virtual ~Animal(void);
		Animal & operator=(const Animal & src);

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif
