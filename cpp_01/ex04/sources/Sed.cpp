/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:53:12 by twang             #+#    #+#             */
/*   Updated: 2023/10/25 15:56:18 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

/*---- constructor & destructor ----------------------------------------------*/

Sed::Sed( void )
{
	std::cout << GREY;
	std::cout << "default constructor called with type ";
	std::cout << END << std::endl;
}

Sed::~Sed( void )
{
	std::cout << GREY;
	std::cout << "default destructor called with type ";
	std::cout << END << std::endl;
}
