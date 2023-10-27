/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:35:00 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/27 13:27:32 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Zombie::Zombie( void )
{
	std::cout << "default zombie constructor called" << endl;
}

Zombie::~Zombie( void )
{
	std::cout << name ;
	std::cout << " : default zombie destructor called" << endl;
}

/*---- functions -------------------------------------------------------------*/

void	Zombie::announce( void )
{
	std::cout << name << " : Moar BraiiiiiiinnnzzzZ..." << endl;
}
