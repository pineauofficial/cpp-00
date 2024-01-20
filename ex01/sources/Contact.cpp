/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:50:01 by pineau            #+#    #+#             */
/*   Updated: 2024/01/20 16:50:20 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <ostream>
#include <iostream>
#include <string>
#include <cctype>

Contact::Contact(void) {
	this->_is_full = false;
	return ;
}

Contact::~Contact(void) {
	return ;
}

int	check_printable(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (std::isprint(str[i]))
			i++;
		else
		{
			return (0);
			break;
		}
	}
	return (1);
}

void	Contact::add_contact(void) {
	std::cout << "First name: ";
	getline(std::cin, this->_first_name);
	while (_first_name.empty() || !check_printable(_first_name))
	{
		std::cout << "First name can't be empty or composed of invalid characters" << std::endl;
		std::cout << "First name: ";
		getline(std::cin, this->_first_name);
		if (std::cin.eof()) {
            return ;
        }
	}
	std::cout << "Last name: ";
	getline(std::cin, this->_last_name);
	while (_last_name.empty() || !check_printable(_last_name))
	{
		std::cout << "Last name can't be empty or composed of invalid characters" << std::endl;
		std::cout << "Last name: ";
		getline(std::cin, this->_last_name);
		if (std::cin.eof()) {
            return ;
        }
	}
	std::cout << "Nickname: ";
	getline(std::cin, this->_nickname);
	while (_nickname.empty() || !check_printable(_nickname))
	{
		std::cout << "Nickname can't be empty or composed of invalid characters" << std::endl;
		std::cout << "Nickname: ";
		getline(std::cin, this->_nickname);
		if (std::cin.eof()) {
            return ;
        }
	}
	while (1)
	{
		int check = 0;
		int i = 0;
		std::cout << "Phone number: ";
		getline(std::cin, this->_phone_number);
		while (_phone_number.empty())
		{
			std::cout << "Phone number can't be empty" << std::endl;
			std::cout << "Phone number: ";
			getline(std::cin, this->_phone_number);
			if (std::cin.eof()) {
           		return ;
        }
		}
		while (i < (int)_phone_number.length())
		{
			if (!std::isdigit(_phone_number[i]))
			{
				std::cout << "Phone number can only contain digits" << std::endl;
				i = 0;
				check = 1;
				break;
			}
			else
				i++;
		}
		if (check == 0)
			break;
	}
	std::cout << "Darkest secret: ";
	getline(std::cin, this->_darkest_secret);
	if (std::cin.eof()) {
            return ;
        }
	while (_darkest_secret.empty() || !check_printable(_darkest_secret))
	{
		std::cout << "Darkest secret can't be empty or composed of invalid characters" << std::endl;
		std::cout << "Darkest secret: ";
		getline(std::cin, this->_darkest_secret);
		if (std::cin.eof()) {
            return ;
        }
	}
	std::cout << std:: endl <<" > Contact added" << std::endl << std::endl;
	this->_is_full = true;
}

void	Contact::display_contact(void) {
	if (_is_full == false)
		std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << "First name: " << _first_name << std::endl;
		std::cout << "Last name: " << _last_name << std::endl;
		std::cout << "Nickname: " << _nickname << std::endl;
		std::cout << "Phone number: " << _phone_number << std::endl;
		std::cout << "Darkest secret: " << _darkest_secret << std::endl << std::endl;
	}
}

bool	Contact::is_full(void) {
	return (this->_is_full);
}

int Contact::get_index(void) {
	return (this->index);
}

std::string Contact::get_first_name(void) {
	return (this->_first_name);
}

std::string Contact::get_last_name(void) {
	return (this->_last_name);
}

std::string Contact::get_phone_number(void) {
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void)  {
	return (this->_darkest_secret);
}

std::string Contact::get_nickname(void)  {
	return (this->_nickname);
}	

