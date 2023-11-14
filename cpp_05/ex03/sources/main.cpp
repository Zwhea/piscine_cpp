/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:20:00 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 15:46:05 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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

		PresidentialPardonForm	Attestation_1( "Georges" );
		RobotomyRequestForm		Attestation_2( "Wall_E" );
		ShrubberyCreationForm	Attestation_3( "home" );

		std::cout << Bab;
		std::cout << Beb;
		std::cout << Bib;
		std::cout << Bob;
		std::cout << Bub;
		std::cout << Byb;

		std::cout << std::endl;

		std::cout << Attestation_1;
		std::cout << Attestation_2;
		std::cout << Attestation_3;

		// Bab.decrement( );
		// Beb.decrement( );
		// Bib.decrement( );

		std::cout << std::endl;

		Bab.signForm( Attestation_1 );
		Beb.signForm( Attestation_2 );
		Bib.signForm( Attestation_3 );

		// Bob.decrement( );
		// Bub.decrement( );
		// Byb.decrement( );

		std::cout << std::endl;

		Bob.executeForm( Attestation_1 );
		Bub.executeForm( Attestation_2 );
		Byb.executeForm( Attestation_3 );

		// Bab.signForm( Attestation_1 );
		// Beb.signForm( Attestation_2 );
		// Bib.signForm( Attestation_3 );

		Intern someRandomIntern;
		AForm* rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("presidential  pardon", "Bender");
		std::cout << std::endl;
		Bab.signForm( *rrf );
		std::cout << std::endl;
		Bob.executeForm( *rrf );

		if (rrf)
			delete rrf;
	}

	catch ( std::exception & error )
	{
		std::cerr << error.what( );
	}
	return ( 0 );
}