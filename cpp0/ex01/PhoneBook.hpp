/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:21 by kwang             #+#    #+#             */
/*   Updated: 2022/02/23 17:14:11 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "utils.hpp"
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);

		void	add_contact(void);
		void	search_contacts();
		void	display_contacts(void);
	private:
		Contact contacts[8];
		int 	_index;
		int		_fillState;
};

#endif
