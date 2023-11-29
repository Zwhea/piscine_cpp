/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/29 16:30:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string	openFile( char* file )
{
	std::string	new_file = static_cast< std::string >( file );
	std::string	extension = new_file.substr( new_file.length( ) - 4, new_file.length( ) );
	if ( extension != ".csv" && extension != ".txt" )
		throw std::invalid_argument( RED INV_FIL END );

	std::ifstream	infile( file, std::ios::in );
	if ( !infile )
		throw std::invalid_argument( RED INV_FIL END );

	char		*buffer;
	std::size_t	length = 0;

	infile.seekg( 0, infile.end );
	length = infile.tellg( );

	infile.seekg( 0, infile.beg );
	buffer = new char[length + 1];
	buffer[length] = '\0';

	infile.read( buffer, length );
	infile.close( );
	
	std::string	new_buff = buffer;
	delete[] buffer;

	return ( new_buff );
}
