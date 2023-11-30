/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/30 15:31:11 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( std::string file )
{
	std::string	extension = file.substr( file.length( ) - 4, file.length( ) );
	if ( extension != ".csv" && extension != ".txt" )
		throw std::invalid_argument( RED INV_FIL END );

	std::ifstream	data( file.c_str( ), std::ios::in );
	for ( std::string line; std::getline( data, line ); )
	{
		std::string::size_type pos = line.find(',');
		if ( pos != std::string::npos )
		{
			std::string date = line.substr( 0, pos );
			std::string buffer = line.substr( pos + 1, line.length( ) );
			double	value = std::atof( buffer.c_str( ) );
			++_database[ date ] = value;
		}
		else
			throw std::invalid_argument( RED INV_FIL END );
	}
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & copy )
{
	( void )copy;
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & right_value )
{
	( void )right_value;
	return ( *this );
}

BitcoinExchange::~BitcoinExchange( void ) { }

void	BitcoinExchange::checkDatabase( void )
{
	for(std::map<std::string, double>::iterator it = _database.begin(); it != _database.end(); ++it)
	{
		std::string cle = it->first;
		std::cout << BLUE << cle;
		double valeur = it->second;
		std::cout << RED << " " << valeur << std::endl;
	}
}


// std::map< std::string, double >	getDatabase( void ) { }

// std::string	openFile( char* file )
// {
// 	std::string	new_file = static_cast< std::string >( file );
// 	std::string	extension = new_file.substr( new_file.length( ) - 4, new_file.length( ) );
// 	if ( extension != ".csv" && extension != ".txt" )
// 		throw std::invalid_argument( RED INV_FIL END );

// 	std::ifstream	infile( file, std::ios::in );
// 	if ( !infile )
// 		throw std::invalid_argument( RED INV_FIL END );

// 	char		*buffer;
// 	std::size_t	length = 0;

// 	infile.seekg( 0, infile.end );
// 	length = infile.tellg( );

// 	infile.seekg( 0, infile.beg );
// 	buffer = new char[length + 1];
// 	buffer[length] = '\0';

// 	infile.read( buffer, length );
// 	infile.close( );

// 	buffer.strtok();
// 	std::string	new_buff = buffer;
// 	delete[] buffer;

// 	return ( new_buff );
// }

// void	checkDatabase( std::string database )
// {
// 	std::cout << database << std::endl;
// }

// void	checkGivenDatabase( std::string database )
// {
// 	std::cout << database << std::endl;
// }