/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:34:53 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:34:54 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP
#include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog & src);
		~Dog(void);
		Dog & operator=(const Dog & src);

		void makeSound(void) const;
};

#endif
