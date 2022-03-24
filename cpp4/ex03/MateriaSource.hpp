/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:36:09 by kwang             #+#    #+#             */
/*   Updated: 2022/03/24 22:31:39 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria * _source[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource & src);
		~MateriaSource(void);
		MateriaSource & operator=(const MateriaSource & src);

		AMateria * getSource(const size_t index) const;

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
