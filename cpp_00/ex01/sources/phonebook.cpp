/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:03:02 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/25 14:45:33 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*---- constructor & destructor ----------------------------------------------*/

PhoneBook::PhoneBook()
{
	limit = 0;
	std::cout << "default phone book contructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "default phone book destructor called" << std::endl;
}

/*---- functions -------------------------------------------------------------*/

bool	PhoneBook::EmptyPhoneBook()
{
	if (limit == 0)
		return (true);
	return (false);
}

void	PhoneBook::AddContact(int Index)
{
	Contact New;

	New.SetContact(Index);
	Repertory[Index] = New;
	if (limit < 8)
		limit++;
}

void	PhoneBook::SearchContact(int Index)
{
	std::string	line;
	int index_cpy;

	PrintRepertory();
	std::cout << "The contact informations you want to look at: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		return ;
	for (int i = 0; i < (int)line.length(); i++)
	{
		if (!isdigit(line[i]))
		{
			std::cout << RED << "wrong format start over" << END << std::endl;
			return (SearchContact(Index));
		}
	}
	std::istringstream	contact_id(line);
	contact_id >> index_cpy;
	PrintDetail(index_cpy);
}

void	PhoneBook::ExitPhoneBook(int Index)
{
	(void)Index;

	std::cout << RED << "Ending program" << END << std::endl;
}

void	PhoneBook::PrintRepertory()
{
	print_banner();
	print_box_up();
	for (int i = 0; i < limit; i++)
		Repertory[i].PrintContacts(limit);
	print_box_down();
}

void	PhoneBook::PrintDetail(int index)
{
	std::string	line;
	
	if (index < limit)
		Repertory[index].PrintContact();
	else
	{
		std::cout << RED;
		std::cout << "Well...looks like you don't have that much friends pal !";
		std::cout << END << std::endl;
		std::cout << "The contact informations you want to look at: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			return ;
		for (int i = 0; i < (int)line.length(); i++)
		{
			if (!isdigit(line[i]))
			{
				std::cout << RED << "wrong format start over" << END << std::endl;
				SearchContact(index);
			}
		}
		std::istringstream	contact_id(line);
		contact_id >> index;
		PrintDetail(index);
	}
}
