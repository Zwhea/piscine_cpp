/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:29 by twang             #+#    #+#             */
/*   Updated: 2023/12/01 10:57:26 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( std::string file )
{
	std::string	extension = file.substr( file.length( ) - 4, file.length( ) );
	if ( extension != ".csv" )
		throw std::invalid_argument( RED EXT_FIL END );

	std::ifstream	data( file.c_str( ), std::ios::in );
	for ( std::string line; std::getline( data, line ); )
	{
		bool hasDigit = false;
		for ( std::size_t i = 0; i < line.length( ); i++ )
		{
			if ( std::isdigit( line[i] ) )
				hasDigit = true;
			if (hasDigit && !std::isdigit(line[i]) && line[i] != '-' && line[i] != ',' && line[i] != '.')
				throw std::invalid_argument(RED INV_FIL END);
		}
		if ( !hasDigit )
			continue ;
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
	if ( _database.empty( ) )
		throw std::invalid_argument( RED INV_FIL END );
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & copy )
{
	_database = copy._database;
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	_database = right_value._database;

	return ( *this );
}

BitcoinExchange::~BitcoinExchange( void ) { }

void	BitcoinExchange::showDatabase( void )
{
	for(std::map<std::string, double>::iterator it = _database.begin(); it != _database.end(); ++it)
	{
		std::string cle = it->first;
		std::cout << BLUE << cle;
		double valeur = it->second;
		std::cout << RED << " " << valeur << std::endl;
	}
}

void	BitcoinExchange::checkDate( std::string date )
{
	std::cout << YELLOW << date << END << std::endl;
}
void	BitcoinExchange::checkValue( std::string value )
{
	double	val = std::atof( value.c_str( ) );
	if ( val < 1 || val > 999 )
		std::cout << RED << "Error : too large a number." << END << std::endl;
	std::cout << PURPLE << val << END << std::endl;
}

std::string	BitcoinExchange::getInputData( std::string file )
{
	std::ifstream	data( file.c_str( ), std::ios::in );
	for ( std::string line; std::getline( data, line ); )
	{
		bool hasDigit = false;
		for ( std::size_t i = 0; i < line.length( ); i++ )
		{
			if ( std::isdigit( line[i] ) )
				hasDigit = true;
			if (hasDigit && !std::isdigit(line[i]) && line[i] != '-' && line[i] != '|' && line[i] != '.' && line[i] != ' ' )
				throw std::invalid_argument(RED INV_INPUT END);
		}
		if ( !hasDigit )
			continue ;
		std::string::size_type pos = line.find('|');
		if ( pos != std::string::npos )
		{
			std::string date = line.substr( 0, pos );
			std::string value = line.substr( pos + 1, line.length( ) );
			checkDate( date );
			checkValue( value );
		}
		else
		{
			std::cout << RED << ERR_INPUT << END << line << std::endl;
			continue ;
		}
	}
	std::string	inputData = "heyo";
	return ( inputData );
}
