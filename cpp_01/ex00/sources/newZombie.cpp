/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:57:42 by wangthea          #+#    #+#             */
/*   Updated: 2023/10/27 13:28:33 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name )
{
	Zombie*	new_zombie;

	new_zombie = new Zombie(name);
	if (!new_zombie)
		std::cout << "error :: memory allocation's failed" << endl;
	return (new_zombie);
}
