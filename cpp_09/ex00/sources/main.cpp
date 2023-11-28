/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:48 by twang             #+#    #+#             */
/*   Updated: 2023/11/28 17:04:56 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{
	try
	{
		( void )av;
		if ( ac != 2 )
			throw std::invalid_argument( RED "This program needs only one." END );
	}
	catch ( std::invalid_argument const & error ) {
		std::cerr << error.what() << std::endl; }

	return ( 0 );
}