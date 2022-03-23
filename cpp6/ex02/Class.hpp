/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:32:31 by kwang             #+#    #+#             */
/*   Updated: 2022/03/23 22:32:32 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP

#include <cstdlib>
#include <time.h>
#include <iostream>

class Base
{
	public:
		virtual ~Base(void);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
