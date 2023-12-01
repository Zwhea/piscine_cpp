/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:16 by twang             #+#    #+#             */
/*   Updated: 2023/12/01 10:42:00 by twang            ###   ########.fr       */
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

			std::string	getInputData( std::string file );

			void		checkDate( std::string date );
			void		checkValue( std::string value );

		private :

			BitcoinExchange( void );
			std::map< std::string, double >	_database;

};


#endif