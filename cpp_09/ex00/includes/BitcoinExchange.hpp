/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:16 by twang             #+#    #+#             */
/*   Updated: 2023/11/29 16:37:04 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define  BITCOINEXCHANGE_HPP

/*---- includes --------------------------------------------------------------*/

# include "BitcoinExchange.h"

/*---- prototypes ------------------------------------------------------------*/

std::string	openFile( char* file );
void		checkDatabase( std::string database );
void		checkGivenDatabase( std::string database );

#endif