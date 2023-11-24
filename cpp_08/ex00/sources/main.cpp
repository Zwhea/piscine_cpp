/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:21 by twang             #+#    #+#             */
/*   Updated: 2023/11/24 10:27:35 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main( void )
{
	std::vector< int >	container;

	srand(time(NULL));
	for ( int i = 0; i < 100; i++ )
		container.push_back( std::rand( ) % 101 );
	for ( int i = 0; i < 100; i++ )
	{
		std::cout << "[ ";
		if ( i < 10 )
			std::cout << "0";
		std::cout << i << " ] → ";
		std::cout << container[i] << std::endl;
	}

	try
	{
		::easyfind( container, 59 );
		std::cout << GREEN << "Found it !"<< END << std::endl;
		::easyfind( container, 101 );
		std::cout << GREEN << "Found it !"<< END << std::endl;
	}
	catch ( std::exception &error )
	{
		std::cerr << error.what() << std::endl;
	}

	return ( 0 );
}
