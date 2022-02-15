/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:21 by kwang             #+#    #+#             */
/*   Updated: 2022/02/15 18:58:23 by kwang            ###   ########.fr       */
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
		Contact contacts[9];
		int 	_index;
};

#endif
