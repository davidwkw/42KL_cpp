/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:40 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:41 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal & src);
		WrongAnimal & operator=(const WrongAnimal & src);

	void makeSound(void) const;
		std::string getType(void) const;
};

#endif
