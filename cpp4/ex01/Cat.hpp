/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:11 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:12 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain * _brain;
	public:
		Cat(void);
		Cat(const Cat & src);
		~Cat(void);
		Cat & operator=(const Cat & src);

		void makeSound(void) const;
		Brain * getBrain(void) const;
};

#endif
