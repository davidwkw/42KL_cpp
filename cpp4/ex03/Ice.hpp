/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:35:55 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:35:56 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice & src);
		~Ice(void);
		Ice & operator=(const Ice & src);

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
