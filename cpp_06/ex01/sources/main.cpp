/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/16 17:28:09 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void )
{
	Data	*Data = new ::Data;

	uintptr_t	i = 10;
	Data		= Serializer::deserialize( i );
	
	i = Serializer::serialize( Data );

	std::cout << i << std::endl;

	Data		= Serializer::deserialize( i );

	i = Serializer::serialize( Data );

	std::cout << i << std::endl;

	return ( 0 );
}
