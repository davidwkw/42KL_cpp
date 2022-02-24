/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:07:17 by kwang             #+#    #+#             */
/*   Updated: 2022/02/24 14:07:18 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _bits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);

		Fixed & operator=(Fixed const & rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
