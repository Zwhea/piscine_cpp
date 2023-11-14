/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:20:00 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 10:56:25 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		// Bureaucrat	Bib( "Bib", 0 );
		// Bureaucrat	Bab( "Bab", 151 );

		// Bureaucrat	Beb( "Beb", 1 );
		// std::cout << Beb;
		// Beb.increment( );
		// std::cout << Beb;

		// Bureaucrat	Bub( "Bub", 150 );
		// std::cout << Bub;
		// Bub.decrement( );
		// std::cout << Bub;

		Bureaucrat	Bob( "Bob", 2 );
		std::cout << Bob;
		Bob.increment( );
		std::cout << Bob;
		Bob.decrement( );
		std::cout << Bob;
	}

	catch ( std::exception & error )
	{
		std::cerr << error.what( );
	}

	return ( 0 );
}