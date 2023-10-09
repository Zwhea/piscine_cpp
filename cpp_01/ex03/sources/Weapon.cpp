/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:22:45 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/09 17:34:53 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Weapon::Weapon( void )
{
	std::cout << GREY << "default weapon constructor called" << END << std::endl;
}

Weapon::Weapon( std::string new_type ) : type (new_type)
{
	std::cout << GREY << type ;
	std::cout << " : weapon contructor called" << END << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << GREY << type ;
	std::cout << " : weapon destructor called" << END << std::endl;
}

/*---- functions -------------------------------------------------------------*/

const std::string&	Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType( std::string const &type_ref )
{
	type = type_ref;
}
