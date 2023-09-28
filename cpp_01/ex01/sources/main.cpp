/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:16 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/28 16:06:57 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int horde_size = 10;

	Zombie	*horde_zombie = NULL;
	Zombie	*horde_zombie{new Zombie[horde_size]};
	
	for (int i = 0; i < horde_size; i++)
	{
		horde_zombie->announce();
	}

	// heap_zombie = (*heap_zombie).newZombie("Bob");
	// heap_zombie->randomChump("Bert");
	delete [] horde_zombie;
	return (0);
}