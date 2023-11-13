/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:20:00 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 14:53:39 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void )
{
	try
	{
		Bureaucrat				Bab( "Bab", 25 ); //can sign President
		Bureaucrat				Beb( "Beb", 72 ); //can sign Robotomy
		Bureaucrat				Bib( "Bib", 145 ); //can sign Shrubbery

		Bureaucrat				Bob( "Bob", 5 ); //can execute President
		Bureaucrat				Bub( "Bub", 45 ); //can execute Robotomy
		Bureaucrat				Byb( "Byb", 137 ); //can execute Shrubbery

		PresidentialPardonForm	Attestation_1( "attestation 1" );
		RobotomyRequestForm		Attestation_2( "attestation 2" );
		ShrubberyCreationForm	Attestation_3( "attestation 3" );

		std::cout << Bab;
		std::cout << Beb;
		std::cout << Bib;
		std::cout << Bob;
		std::cout << Bub;
		std::cout << Byb;

		std::cout << Attestation_1;
		std::cout << Attestation_2;
		std::cout << Attestation_3;

		// Bab.decrement( );
		// Beb.decrement( );
		// Bib.decrement( );

		Bab.signForm( Attestation_1 );
		Beb.signForm( Attestation_2 );
		Bib.signForm( Attestation_3 );

		// Bob.decrement( );
		// Bub.decrement( );
		// Byb.decrement( );

		Bob.executeForm( Attestation_1 );
		Bub.executeForm( Attestation_2 );
		Byb.executeForm( Attestation_3 );

		// Bab.signForm( Attestation_1 );
		// Beb.signForm( Attestation_2 );
		// Bib.signForm( Attestation_3 );

	}

	catch ( std::exception & error )
	{
		std::cerr << error.what( );
	}

	return ( 0 );
}