/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:33:54 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/13 16:50:16 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	int			i;
	std::string	line;
	PhoneBook	New;
	
	i = 0;
	std::cout << "Welcome to my awesome phonebook" << std::endl;
	while (POLLUX)
	{
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			if (i == 7)
				i = 0;
			New.AddContact(i);
			i++;
		}
		if (line == "SEARCH")
		{
			New.PrintRepertory();
			std::cout << "The contact informations you want to look at: ";
			std::getline(std::cin, line);
			New.PrintDetail(std::atoi(line.c_str()));
		}
		if (line == "EXIT")
			return (0);
	}
	return (0);
}
