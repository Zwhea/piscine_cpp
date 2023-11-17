/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:30:20 by twang             #+#    #+#             */
/*   Updated: 2023/11/17 12:49:18 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int	main( int ac, char **av )
{
	if ( ac != 2)
	{
		std::cout << RED << "You need one argument.";
		std::cout << END << std::endl;
		return ( -1 );
	}

	ScalarConvert::convert( av[1] );

	return ( 0 );
}
