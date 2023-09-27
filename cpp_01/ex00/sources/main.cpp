/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:26:16 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/27 21:20:12 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie	*heap_zombie;

	heap_zombie = Zombie::newZombie("Bob");
	heap_zombie->announce();
	heap_zombie->randomChump("Bert");
	delete heap_zombie;
	return (0);
}