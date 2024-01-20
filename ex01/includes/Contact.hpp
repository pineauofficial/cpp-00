/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:46:09 by pineau            #+#    #+#             */
/*   Updated: 2024/01/20 16:58:10 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <ostream>
#include <iostream>
#include <string>

class Contact {
	
	public:
		Contact(void);
		~Contact(void);
		
		void		add_contact(void);
		void		display_contact(void);

		bool		is_full(void);
		int			get_index(void);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		std::string get_phone_number(void);
		std::string get_darkest_secret(void);
		
	private:
		bool		_is_full;
		int			index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif