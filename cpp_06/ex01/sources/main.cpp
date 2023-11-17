/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/17 09:23:12 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
# include <typeinfo>

int	main( void )
{
	Data	*data = new ::Data;

	uintptr_t	i;
	
	std::cout << data << std::endl;
	
	i = Serializer::serialize( data );
	data		= Serializer::deserialize( i );

	std::cout << data << std::endl;

	return ( 0 );
}
