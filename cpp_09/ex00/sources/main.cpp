/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:48 by twang             #+#    #+#             */
/*   Updated: 2023/11/30 21:45:42 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{
	std::string		data = DATABASE;
	( void )av;

	try
	{

		if ( ac != 2 )
			throw std::invalid_argument( RED INV_ARG END );
		BitcoinExchange	database( data );
		database.checkDatabase( );


	}
	catch ( std::invalid_argument const & error ) {
		std::cerr << error.what() << std::endl; }

	return ( 0 );
}