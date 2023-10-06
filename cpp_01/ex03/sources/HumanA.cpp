/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:26:12 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/06 15:35:59 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*---- constructor & destructor ----------------------------------------------*/

HumanA::HumanA( std::string new_name, Weapon& new_weapon) : name ( new_name ), weapon ( new_weapon )
{
	std::cout << GREY << name ;
	std::cout << ": humanA constructor called with type ";
	std::cout << weapon.getType() << END << std::endl;
}

HumanA::~HumanA()
{
	std::cout << GREY << name ;
	std::cout << " : humanA destructor called" << END << std::endl;
}

/*---- functions -------------------------------------------------------------*/

void	HumanA::attack( void )
{
	std::cout << RED << name;
	std::cout << " attacks with their ";
	std::cout << weapon.getType() << END << std::endl;
}