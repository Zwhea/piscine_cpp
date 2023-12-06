/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:23 by twang             #+#    #+#             */
/*   Updated: 2023/12/06 14:08:32 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av )
{
	try
	{
		if ( ac < 3 )
			throw std::invalid_argument( RED INV_ARG END );
		if ( parseArg( ac, av ) )
		{
			PmergeVector( ac, av );
			PmergeDeque( ac, av );
		}

	}
	catch ( std::invalid_argument const & error ) {
		std::cerr << error.what() << std::endl; }
	return ( 0 );
}
