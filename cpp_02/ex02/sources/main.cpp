/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:51 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/01 16:47:02 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( 2 );
	Fixed d( 1 );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;

	std::cout << b << std::endl;

	std::cout << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << std::endl;

	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	std::cout << c * d << std::endl;
	std::cout << c / d << std::endl;

	return ( 0 );
}

/*

0 //a

0.00390625 //++a

0.00390625 //a

0.00390625 //a++

0.0078125 //a

10.1016 //b

10.1016 //result max

*/