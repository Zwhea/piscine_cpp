/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:48 by twang             #+#    #+#             */
/*   Updated: 2023/11/29 16:29:17 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{
	std::string	database_csv;
	std::string	database_txt;
	char		data[] = DATABASE;

	try
	{

		if ( ac != 2 )
			throw std::invalid_argument( RED INV_ARG END );

		database_csv = openFile( data );
		database_txt = openFile( av[1] );
		if ( database_csv.empty() || database_txt.empty() )
			throw std::invalid_argument( RED INV_FIL END );

	}
	catch ( std::invalid_argument const & error ) {
		std::cerr << error.what() << std::endl; }


	return ( 0 );
}