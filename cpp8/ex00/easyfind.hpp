/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:30:36 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:30:38 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

#define EASYFIND_HPP
#include <algorithm>
#include <exception>
#include <iostream>

class ValueNotFoundException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Value not locatable";
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int const & value)
{
	typename T::iterator it;

	it = std::find<typename T::iterator, int>(container.begin(), container.end(), value);
	if (it == container.end())
		throw ValueNotFoundException();
	return (it);
}

#endif
