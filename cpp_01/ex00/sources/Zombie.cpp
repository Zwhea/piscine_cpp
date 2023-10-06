/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:35:00 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/06 09:31:50 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---- constructor & destructor ----------------------------------------------*/

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