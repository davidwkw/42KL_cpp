/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:14 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:15 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain * _brain;
	public:
		Dog(void);
		Dog(const Dog & src);
		~Dog(void);
		Dog & operator=(const Dog & src);

		void makeSound(void) const;
		Brain * getBrain(void) const;
};

#endif
