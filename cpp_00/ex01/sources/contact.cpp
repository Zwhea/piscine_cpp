/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/13 16:57:07 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	std::cout << "default contact contructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "default contact destructor called" << std::endl;
}

void	Contact::SetContact(int Index)
{
	
	index = Index;
	std::cout << "please enter your first name : ";
	std::getline(std::cin, first_name);
	std::cout << "your last name : ";
	std::getline(std::cin, last_name);
	std::cout << "your nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "your phone number : ";
	std::getline(std::cin, phone_number);
	std::cout << "your darkest secret ? ";
	std::getline(std::cin, darkest_secret);
}

void	Contact::PrintContacts()
{
	std::cout << "|";
	std::cout << std::right << std::setw(10);
	std::cout << index;
	std::cout << "|";
	std::cout << std::right << std::setw(10);
	if (first_name.length() >= 10)
		std::cout << first_name.substr(0, 9) + ".";
	else
		std::cout << first_name;
	std::cout << "|";
	std::cout << std::right << std::setw(10);
	if (last_name.length() >= 10)
		std::cout << last_name.substr(0, 9) + ".";
	else
		std::cout << last_name;
	std::cout << "|";
	std::cout << std::right << std::setw(10);
	if (nickname.length() >= 10)
		std::cout << nickname.substr(0, 9) + ".";
	else
		std::cout << nickname;
	std::cout << "|" << std::endl;
}

void	Contact::PrintContact()
{
	std::cout << "first_name: \t";
	std::cout << first_name << std::endl;
	std::cout << "last_name: \t";
	std::cout << last_name << std::endl;
	std::cout << "nickname: \t";
	std::cout << nickname << std::endl;
	std::cout << "phone_number: \t";
	std::cout << phone_number << std::endl;
	std::cout << "darkest_secret: ";
	std::cout << darkest_secret << std::endl;
}