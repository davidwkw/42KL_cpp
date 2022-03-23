/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:53 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:53 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure & src);
		~Cure(void);
		Cure & operator=(const Cure & src);

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
