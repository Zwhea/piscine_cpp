/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:48 by twang             #+#    #+#             */
/*   Updated: 2023/12/04 10:27:43 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{
	std::string		data = DATABASE;
	std::string		inputData ;

	try
	{

		if ( ac != 2 )
			throw std::invalid_argument( RED INV_ARG END );
		BitcoinExchange	database( data );
		database.getInputData( av[1] );

	}
	catch ( std::invalid_argument const & error ) {
		std::cerr << error.what() << std::endl; }

	return ( 0 );
}