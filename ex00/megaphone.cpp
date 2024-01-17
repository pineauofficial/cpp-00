/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:06:07 by pineau            #+#    #+#             */
/*   Updated: 2024/01/13 17:35:03 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	char c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			c = (argv[i][j]);
			c = std::toupper(c);
			std::cout << c;
			j++;
		}
		i++;
		if (i < argc)
			std::cout << " ";
		else
			std::cout << std::endl;
	}
	return (0);
}