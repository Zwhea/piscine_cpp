/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:54:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/23 15:24:07 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int	main( void )
{
	Array< int > a( 10 );
	Array< int > b;

	
	try
	{
		for ( int i = 0; i < 10; i++ )
		{
			std::cout << BLUE << a[i] << std::endl;
			a[i] = 42;
			std::cout << RED << a[i] << END << std::endl;
		}
	}
	catch ( std::exception &error )
	{
		std::cerr << error.what() << std::endl;
	}
	try
	{
		b = a;
		b[4] = 100000;
		for ( int i = 0; i < 10; i++ )
		{
			std::cout << PURPLE << b[i] << std::endl;
		}
	}
	catch ( std::exception &error )
	{
		std::cerr << error.what() << std::endl;
	}
	return ( 0 );
}