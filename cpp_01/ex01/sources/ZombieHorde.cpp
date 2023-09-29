/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:08:33 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/29 13:23:16 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	Zombie*	newZombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		newZombieHorde[i].name = name;
		newZombieHorde[i].announce();
	}
	return (newZombieHorde);
}