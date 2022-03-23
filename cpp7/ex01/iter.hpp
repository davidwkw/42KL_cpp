/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:31:22 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:31:24 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

template <typename T>
void iter(T *addr, size_t const size, void (*func)(T & element)) {
	for (size_t i = 0; i < size; i++)
		func(addr[i]);
}

#endif
