/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:35:00 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/29 13:22:13 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Zombie::Zombie( void )
{
	cout << "default zombie contructor called" << endl;
}

Zombie::Zombie( std::string name ) : name( name )
{
	cout << name ;
	cout << "\t: default zombie contructor called" << endl;
}

Zombie::~Zombie( void )
{
	cout << name ;
	cout << "\t: default zombie destructor called" << endl;
}

/*---- functions -------------------------------------------------------------*/

void	Zombie::announce( void )
{
	cout << name << "\t: BraiiiiiiinnnzzzZ..." << endl;
}
