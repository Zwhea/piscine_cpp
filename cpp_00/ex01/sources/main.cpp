/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:33:54 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/19 15:42:26 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*---- prototypes ------------------------------------------------------------*/

static void	_instructions();

/*----------------------------------------------------------------------------*/

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
		_instructions();
		std::getline(std::cin, line);
		if (std::cin.eof())
			return (-1);
		for (int j = 0; j < 3; j++)
		{
			if (j == 2)
				return (0);
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

static void	_instructions()
{
	std::cout << GREEN << "[ADD]\t: add a new contact" << std::endl;
	std::cout << "[SEARCH]: search a contact" << std::endl;
	std::cout << "[EXIT]\t: end the program" << std::endl;
	std::cout << "> " << END;
}