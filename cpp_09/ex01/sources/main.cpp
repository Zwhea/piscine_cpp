/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:48 by twang             #+#    #+#             */
/*   Updated: 2023/12/04 16:21:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int ac, char **av )
{
	try
	{

		if ( ac != 2 )
			throw std::invalid_argument( RED INV_ARG END );
		if ( parseArg( av[1] ) )
			reversePolishNotation( av[1] );

	}
	catch ( std::invalid_argument const & error ) {
		std::cerr << error.what() << std::endl; }

	return ( 0 );
}