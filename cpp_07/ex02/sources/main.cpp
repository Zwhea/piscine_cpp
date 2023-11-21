/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:54:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/21 15:19:36 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int	main( void )
{
	Array< int > a( 10 );
	Array< int > b;

	Array< char > c( 10 );
	Array< char > d;

	for ( int i = 0; i < 10; i++ )
	{
		std::cout << BLUE << a[i] << std::endl;
		// std::cout << PURPLE << b[i] << std::endl;
		a[i] = 42;
		std::cout << RED << a[i] << END << std::endl;
		// std::cout << YELLOW << b[i] << END << std::endl;
	}
	b = a;
	b[4] = 100000;
	for ( int i = 0; i < 10; i++ )
	{
		// std::cout << BLUE << a[i] << std::endl;
		std::cout << PURPLE << b[i] << std::endl;
		// a[i] = 42;
		// std::cout << RED << a[i] << END << std::endl;
		// std::cout << YELLOW << b[i] << END << std::endl;
	}
	return ( 0 );
}