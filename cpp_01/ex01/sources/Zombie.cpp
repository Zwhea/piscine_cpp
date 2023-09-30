/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:35:00 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/30 10:34:42 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Zombie::Zombie( void )
{
	cout << "default zombie constructor called" << endl;
}

Zombie::~Zombie( void )
{
	cout << name ;
	cout << " : default zombie destructor called" << endl;
}

/*---- functions -------------------------------------------------------------*/

void	Zombie::announce( void )
{
	cout << name << " : Moar BraiiiiiiinnnzzzZ..." << endl;
}
