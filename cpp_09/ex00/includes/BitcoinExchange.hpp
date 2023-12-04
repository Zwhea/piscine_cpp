/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:16 by twang             #+#    #+#             */
/*   Updated: 2023/12/04 10:32:29 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define  BITCOINEXCHANGE_HPP

/*---- includes --------------------------------------------------------------*/

# include "BitcoinExchange.h"

/*---- prototypes ------------------------------------------------------------*/

// std::string	openFile( char* file );

class	BitcoinExchange
{

		public :

			BitcoinExchange( std::string file );
			BitcoinExchange( BitcoinExchange const & copy );
			BitcoinExchange & operator=( BitcoinExchange const & right_value );
			~BitcoinExchange( void );

			void		showDatabase( void );
			bool		showError( std::string error );

			void		getInputData( std::string file );

			bool		checkMonth( std::size_t month );
			bool		checkDay( std::size_t day, std::size_t month );
			bool		checkYear( std::size_t day, std::size_t month, std::size_t year );

			bool		checkDatabase( void );
			bool		checkDate( std::string date );
			bool		checkValue( std::string value );

		private :

			BitcoinExchange( void );
			std::map< std::string, double >	_database;

};

enum e_error
{
	
};

#endif