/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:36:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/12 16:24:27 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::SetContact(Contact New, int Index)
{
	New.index = Index;
	std::cout << "please enter your first name : ";
	std::cin >> New.first_name;
	std::cout << "your last name : ";
	std::cin >> New.last_name;
	std::cout << "your nickname : ";
	std::cin >> New.nickname;
	std::cout << "your phone number : ";
	std::cin >> New.phone_number;
	std::cout << "your darkest secret ? ";
	std::cin >> New.darkest_secret;
}
