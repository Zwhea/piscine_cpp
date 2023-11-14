/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:20:00 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 13:15:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	Bob( "Bob", 10 );
		Form		Attestation( "Attestation", 10, 10 );
		std::cout << Bob;
		std::cout << Attestation;
		Bob.decrement( );
		std::cout << Bob;
		Bob.signForm( Attestation );
		Bob.increment( );
		std::cout << Bob;
		Bob.signForm( Attestation );
		Bob.signForm( Attestation );
	}

	catch ( std::exception & error )
	{
		std::cerr << error.what( );
	}

	return ( 0 );
}