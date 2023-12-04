/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:29 by twang             #+#    #+#             */
/*   Updated: 2023/12/04 14:21:01 by twang            ###   ########.fr       */
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

bool	BitcoinExchange::showError( std::string error )
{
	std::cout << RED << error << END << std::endl;
	return ( false );
}

void	BitcoinExchange::getInputData( std::string file )
{
	if ( !checkDatabase() )
		throw std::invalid_argument(RED INV_FIL END);
	std::ifstream	data( file.c_str( ), std::ios::in );
	for ( std::string line; std::getline( data, line ); )
	{
		bool hasDigit = false;
		for ( std::size_t i = 0; i < line.length( ); i++ )
		{
			if ( std::isdigit( line[i] ) )
				hasDigit = true;
			if (hasDigit && !std::isdigit(line[i]) && line[i] != '-' \
					&& line[i] != '|' && line[i] != '.' && line[i] != ' ' )
				throw std::invalid_argument(RED INV_INPUT END);
		}
		if ( !hasDigit )
			continue ;
		std::string::size_type pos = line.find('|');
		if ( pos != std::string::npos )
		{
			std::string date = line.substr( 0, pos );
			std::string value = line.substr( pos + 1, line.length( ) );
			if ( checkDate( date ) && checkValue( value ) )
				dataConverter( date, value );
		}
		else
		{
			showError( ERR_INPUT );
			std::cout << RED << BAD_INPUT << END << line << std::endl;
			continue ;
		}
	}
}

void	BitcoinExchange::dataConverter( std::string date, std::string value )
{
	std::map<std::string, double>::iterator	upper_bound = _database.upper_bound( date );
	if ( upper_bound != _database.end( ) )
	{
		if ( upper_bound != _database.begin( ) )
			upper_bound--;
		double	val = std::atof( value.c_str( ) );
		double result = val * upper_bound->second;
		std::cout << BLUE << date << END << "→" << " ";
		std::cout << YELLOW << val << END << " = ";
		std::cout << PURPLE << result << END << std::endl;
	}

	// for(std::map<std::string, double>::iterator it = _database.begin(); it != _database.end(); ++it)
	// {
	// 	std::string date = it->first;
	// 	std::cout << date << std::endl;
	// }
}

bool	BitcoinExchange::checkDatabase( void )
{
	for(std::map<std::string, double>::iterator it = _database.begin(); it != _database.end(); ++it)
	{
		std::string date = it->first;
		if ( !checkDate( date ) )
			return ( false );
	}

	return ( true );
}

bool	BitcoinExchange::checkDate( std::string date )
{
	std::string::size_type year_pos = date.find('-');
	if ( year_pos != std::string::npos )
	{
		std::string::size_type month_pos = date.find('-', year_pos + 1);
		if ( month_pos != std::string::npos )
		{
			std::string strMonth = date.substr( year_pos + 1 , month_pos );
			std::size_t	month = std::atoi( strMonth.c_str( ) );
			if ( !checkMonth( month ) )
				return ( showError( INV_DATE ), showError( MON_ERR ) );
			std::string strDay = date.substr( month_pos + 1 );
			std::size_t	day = std::atoi( strDay.c_str( ) );
			if ( !checkDay( day, month ) )
				return ( false );
			std::string strYear = date.substr( 0, year_pos );
			std::size_t	year = std::atoi( strYear.c_str( ) );
			if ( !checkYear( day, month, year ) )
				return ( false );
		}
		else
			return ( showError( INV_DATE ), showError( MON_ERR ) );
	}
	return ( true );
}

bool	BitcoinExchange::checkValue( std::string value )
{
	double	val = std::atof( value.c_str( ) );
	if ( val < 0 )
		return ( showError( ERR_INPUT ), showError( NOT_POS ) );
	if ( val > 1000 )
		return ( showError( ERR_INPUT ), showError( TOO_LARG ) );

	return ( true );
}

bool	BitcoinExchange::checkDay( std::size_t day, std::size_t month )
{
	if ( day < 1 || day > 31 )
		return ( showError( INV_DATE ), showError( DAY_ERR_1 ) );
	if ( month < 7 )
	{
		if ( month % 2 == 0 )
			if ( day > 30 )
				return ( showError( INV_DATE ), showError( DAY_ERR_0 ) );
	}
	else if ( month > 7 )
	{
		if ( month % 2 != 0 )
			if ( day > 30 )
				return ( showError( INV_DATE ), showError( DAY_ERR_0 ) );
	}
	return ( true );
}

bool	BitcoinExchange::checkMonth( std::size_t month )
{
	if ( month < 1 || month > 12 )
		return ( false );
	return ( true );
}

bool	BitcoinExchange::checkYear( std::size_t day, std::size_t month, std::size_t year )
{
	if ( ( day < 3 && month == 1 && year == 2009 ) || year < 2009 )
	{
		showError( INV_DATE );
		showError( YEAR_WARN_1 );
		return ( true );
	}
	if ( ( day > 29 && month >= 3 && year == 2022 ) || year > 2022)
	{
		showError( INV_DATE );
		showError( YEAR_WARN_0 );
		return ( true );
	}
	if ( month == 2 )
	{
		if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
		{
			if ( day > 29 )
				return ( showError( INV_DATE ), showError( DAY_ERR_3 ) );
		}
		else
		{
			if ( day > 28 )
			return ( showError( INV_DATE ), showError( DAY_ERR_2 ) );
		}
	}
	return ( true );
}
