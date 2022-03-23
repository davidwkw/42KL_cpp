/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:33 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:32:34 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int main(void)
{
	Base *rand_ptr;

	rand_ptr = generate();
	std::cout << "Identify pointer check: \n";
	identify(rand_ptr);
	std::cout << "Identify reference check: \n";
	identify(*rand_ptr);
	delete rand_ptr;
	return 0;
}
