/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:35:00 by wangthea          #+#    #+#             */
/*   Updated: 2023/09/26 16:38:56 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Zombie::Zombie()
{
	std::cout << name ;
	std::cout << " : default zombie contructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name ;
	std::cout << " : default zombie destructor called" << std::endl;
}

/*---- functions -------------------------------------------------------------*/
