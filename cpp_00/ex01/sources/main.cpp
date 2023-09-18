/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:33:54 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/18 16:11:32 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	int				i;
	std::string		line;
	PhoneBook		New;
	const t_options	List[] = {{"ADD", &PhoneBook::AddContact}, \
								{"SEARCH", &PhoneBook::SearchContact}, \
								{"EXIT", &PhoneBook::ExitPhoneBook}};
	
	i = 0;
	std::cout << BLUE << "Welcome to my awesome phonebook!" << END << std::endl;
	while (POLLUX)
	{
		std::cout << GREEN << "[ADD]\t: to add a new contact" << std::endl;
		std::cout << "[SEARCH]: to search in your awesome phone book" << std::endl;
		std::cout << "[EXIT]\t: to end the program" << END << std::endl;
		std::getline(std::cin, line);
		for (int j = 0; j < 3; j++)
		{
			if (line == List[j].Keyword)
			{
				(New.*(List[j].Function))(i);
				if (j == 0)
				{
					i++;
					if (i == 8)
						i = 0;
				}
			}
		}
	}
	return (0);
}
