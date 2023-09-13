/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:03:02 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/13 16:45:50 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	limit = 0;
	std::cout << "default phone book contructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "default phone book destructor called" << std::endl;
}

void	PhoneBook::AddContact(int Index)
{
	Contact New;

	New.SetContact(Index);
	Repertory[Index] = New;
	if (limit < 8)
		limit++;
}

void	PhoneBook::PrintRepertory()
{
	for (int i = 0; i < limit; i++)
		Repertory[i].PrintContacts();
}

void	PhoneBook::PrintDetail(int index)
{
	Repertory[index].PrintContact();
}
