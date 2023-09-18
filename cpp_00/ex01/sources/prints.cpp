/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:24:11 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/18 15:24:51 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_banner()
{
	std::cout << BLUE << "\001\u2554";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2566";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2566";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2566";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2557\n";
	std::cout << "\u2551";
	std::cout << " NB INDEX ";
	std::cout << "\u2551";
	std::cout << "FIRST NAME";
	std::cout << "\u2551";
	std::cout << " LASTNAME ";
	std::cout << "\u2551";
	std::cout << " NICKNAME ";
	std::cout << "\u2551\n";
}

void	print_box_up()
{
	std::cout << "\u2560";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u256C";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u256C";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u256C";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2563\n";
}

void	print_box_down()
{
	std::cout << "\u255A";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2569";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2569";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u2569";
	for (int i = 0; i < 10; i++)
		std::cout << "\u2550";
	std::cout << "\u255D\002\n" << END;
}
