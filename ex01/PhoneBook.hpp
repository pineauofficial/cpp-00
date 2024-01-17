/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:38:02 by pineau            #+#    #+#             */
/*   Updated: 2024/01/17 14:01:18 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <ostream>
#include <iostream>
#include <string>

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		void		run(void);
	private:
		Contact		tab[7];
		void		search(Contact *tab);
		void		nbr_spaces(std::string str);
};

#endif