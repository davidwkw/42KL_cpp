/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:31:20 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:31:21 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

#define WHATEVER_HPP

template <typename T>
void swap( T & val1, T & val2 ) {
	T temp;

	temp = val1;
	val1 = val2;
	val2 = temp;
}

template <typename T>
T const & min( T const & val1, T const & val2 ) {
	return ( val2 <= val1 ? val2 : val1 );
}

template <typename T>
T const & max( T const & val1, T const & val2 ) {
	return ( val2 >= val1 ? val2 : val1 );
}

#endif
