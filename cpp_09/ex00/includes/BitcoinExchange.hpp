/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:16 by twang             #+#    #+#             */
/*   Updated: 2023/11/30 21:53:20 by wangthea         ###   ########.fr       */
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

			void	showDatabase( void );
			void	checkDatabase( void );

			void	checkDate( std::string date );
			void	checkValue( double value );

		private :

			BitcoinExchange( void );
			std::map< std::string, double >	_database;

};


#endif