/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:35:00 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/27 21:31:16 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Zombie::Zombie( void )
{
	std::cout << name ;
	std::cout << "\t: default zombie destructor called" << std::endl;
}

Zombie::Zombie( std::string name ) : name( name )
{
	std::cout << name ;
	std::cout << "\t: default zombie contructor called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name ;
	std::cout << "\t: default zombie destructor called" << std::endl;
}

/*---- functions -------------------------------------------------------------*/

void	Zombie::announce( void )
{
	std::cout << name << "\t: BraiiiiiiinnnzzzZ..." << std::endl;
}
