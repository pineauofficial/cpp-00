/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:50:05 by pineau            #+#    #+#             */
/*   Updated: 2024/01/17 17:45:49 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <ostream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>


//faire le ctrl d; 

PhoneBook::PhoneBook(void) {
	// std::cout << "constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "destructor called" << std::endl;
	return ;
}

void	PhoneBook::run(void) {
	int i = 0;
	int index = 0;
	std::string cmd;
	std::cout << "Welcome to your phonebook" << std::endl;
	while (1)
	{
		if (i == 8)
			i = 0;
		std::cout << "Select ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			std::cout << "Exiting due to user request (CTRL+D) or input error" << std::endl;
		if (cmd == "ADD")
		{
			tab[i].add_contact();
			if (tab[i]._is_full == true)
				i++;
		}
		else if (cmd == "SEARCH")
		{
			search(tab);
			std::cout << "Select an index: ";
			getline(std::cin, cmd);
			index = atoi(cmd.c_str());
			if (index < 0 || index > 7)
				std::cout << "Please enter a valid index" << std::endl << std::endl;
			else
				tab[index].display_contact();
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Please enter a valid command as mentioned below" << std::endl << std::endl;
	}
	return ;
}

void	PhoneBook::search(Contact *tab) {
	int i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while(tab[i]._is_full == true && i < 8)
	{
		if (tab[i]._is_full == true)
		{
			std::cout << "|         " << i << "|";
			nbr_spaces(tab[i]._first_name);
			if (tab[i]._first_name.length() > 10)
				std::cout << tab[i]._first_name.substr(0, 9) << ".|";
			else
				std::cout << tab[i]._first_name << "|";
			nbr_spaces(tab[i]._last_name);
			if (tab[i]._last_name.length() > 10)
				std::cout << tab[i]._last_name.substr(0, 9) << ".|";
			else
				std::cout << tab[i]._last_name << "|";
			nbr_spaces(tab[i]._nickname);
			if (tab[i]._nickname.length() > 10)
				std::cout << tab[i]._nickname.substr(0, 9) << ".|" << std::endl;
			else
				std::cout << tab[i]._nickname << "|" << std::endl;
		}
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl << std::endl; 
}

void PhoneBook::nbr_spaces(std::string &str) {
    int length = str.length();
    int spaces = std::max(0, 10 - length);

    for (int i = 0; i < spaces; ++i) {
        std::cout << " ";
    }
}
