/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:24:04 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/02 15:46:20 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*---- constructor & destructor ----------------------------------------------*/

HumanB::HumanB( std::string new_name ) : name ( new_name ), weapon ( NULL )
{
	std::cout << GREY << name ;
	std::cout << " : humanB constructor called" << END << std::endl;
}

HumanB::~HumanB()
{
	std::cout << GREY << name ;
	std::cout << " : humanB destructor called" << END << std::endl;
}

/*---- functions -------------------------------------------------------------*/

void	HumanB::attack( void )
{
	if (!weapon)
	{
		std::cout << RED << name;
		std::cout << RED << " has no weapons" << std::endl;
		return ;
	}
	std::cout << RED << name;
	std::cout << " attacks with their ";
	std::cout << weapon->getType() << END << std::endl;
}

void	HumanB::setWeapon( Weapon &new_weapon )
{
	weapon = &new_weapon;
}
