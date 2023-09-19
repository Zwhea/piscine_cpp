/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/19 10:33:31 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Contact::Contact()
{
	std::cout << "default contact contructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "default contact destructor called" << std::endl;
}

/*---- functions -------------------------------------------------------------*/

void	Contact::SetFirstName()
{
	bool		correct;
	std::string	answer;

	correct = true;
	std::cout << BLUE << "please enter your first name : " << END;
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit (-1);
	if (answer.length() < 2)
		correct = false;
	for (int i = 0; i < (int)answer.length(); i++)
		if (!isalpha(answer[i]) && answer[i] != '-')
			correct = false;
	if (correct)
		first_name = answer;
	else
	{
		std::cout << RED << "wrong format try again" << END << std::endl;
		SetFirstName();
	}
}

void	Contact::SetLastName()
{
	bool		correct;
	std::string	answer;

	correct = true;
	std::cout << BLUE << "your last name : " << END;
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit (-1);
	if (answer.length() < 2)
		correct = false;
	for (int i = 0; i < (int)answer.length(); i++)
		if (!isalpha(answer[i]) && answer[i] != '-' && answer[i] != ' ')
			correct = false;
	if (correct)
		last_name = answer;
	else
	{
		std::cout << RED << "wrong format try again" << END << std::endl;
		SetLastName();
	}
}

void	Contact::SetNickname()
{
	bool		correct;
	std::string	answer;

	correct = true;
	std::cout << BLUE << "your nickname : " << END;
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit (-1);
	if (answer.length() <= 0)
		correct = false;
	for (int i = 0; i < (int)answer.length(); i++)
		if (!isprint(answer[i]))
			correct = false;
	if (correct)
		nickname = answer;
	else
	{
		std::cout << RED << "wrong format try again" << END << std::endl;
		SetNickname();
	}
}

void	Contact::SetPhoneNumber()
{
	bool		correct;
	std::string	answer;

	correct = true;
	std::cout << BLUE << "your phone number : " << END;
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit (-1);
	if (answer.length() == 12)
	{
		if (answer[0] !=  '+')
			correct = false;
		for (int i = 1; i < (int)answer.length(); i++)
			if (!isdigit(answer[i]))
				correct = false;
	}
	else if (answer.length() == 10)
	{
		for (int i = 1; i < (int)answer.length(); i++)
			if (!isdigit(answer[i]))
				correct = false;	
	}
	else
		correct = false;
	if (correct)
		phone_number = answer;
	else
	{
		std::cout << RED << "wrong format try again" << END << std::endl;
		SetPhoneNumber();
	}
}

void	Contact::SetDarkestSecret()
{
	bool		correct;
	std::string	answer;

	correct = true;
	std::cout << BLUE << "your darkest secret ? " << END;
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit (-1);
	if (answer.length() <= 0)
		correct = false;
	for (int i = 0; i < (int)answer.length(); i++)
		if (!isprint(answer[i]))
			correct = false;
	if (correct)
		darkest_secret = answer;
	else
	{
		std::cout << RED << "wrong format try again" << END << std::endl;
		SetDarkestSecret();
	}
}

void	Contact::SetContact(int Index)
{
	index = Index;
	SetFirstName();
	SetLastName();
	SetNickname();
	SetPhoneNumber();
	SetDarkestSecret();
}

void	Contact::PrintContacts(int limit)
{
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	std::cout << index;
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	if (first_name.length() >= 10)
		std::cout << first_name.substr(0, 9) + ".";
	else
		std::cout << first_name;
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	if (last_name.length() >= 10)
		std::cout << last_name.substr(0, 9) + ".";
	else
		std::cout << last_name;
	std::cout << "\u2551";
	std::cout << std::right << std::setw(10);
	if (nickname.length() >= 10)
		std::cout << nickname.substr(0, 9) + ".";
	else
		std::cout << nickname;
	std::cout << "\u2551" << std::endl;
	if (index < limit - 1)
		print_limit_down();
}

void	Contact::PrintContact()
{
	std::cout << std::endl;
	for (int i = 0; i < 45; i++)
		std::cout << GREEN << "\u2550" << END;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "First_name: \t\t" << END;
	std::cout << first_name << std::endl;
	std::cout << GREEN << "Last_name: \t\t" << END;
	std::cout << last_name << std::endl;
	std::cout << GREEN << "Nickname: \t\t" << END;
	std::cout << nickname << std::endl;
	std::cout << GREEN << "Phone number: \t\t" << END;
	std::cout << phone_number << std::endl;
	std::cout << GREEN << "Darkest secret: \t" << END;
	std::cout << darkest_secret << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 45; i++)
		std::cout << GREEN << "\u2550" << END;
	std::cout << "\n" << std::endl;
}