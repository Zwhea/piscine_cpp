/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:16 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/29 13:24:46 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie*	newZombieHorde = NULL;

	newZombieHorde = newZombieHorde->zombieHorde(10, "Bob");
/* to test if the array is not empty
	for (int i = 0; i < 10; i++)
	{
		newZombieHorde[i].announce();
	}
*/
	delete [] newZombieHorde;
	return (0);
}