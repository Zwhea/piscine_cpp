/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:21 by twang             #+#    #+#             */
/*   Updated: 2023/11/14 15:45:57 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Intern::Intern( void )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from Intern." << END << std::endl;
}

Intern::Intern( Intern const & copy )
{
	( void )copy;
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from Intern." << END << std::endl;
}

Intern::~Intern( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from Intern." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

Intern &	Intern::operator=( Intern const & right_value )
{
	( void )right_value;

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

AForm	*Intern::PresidentialForm( std::string target )
{
	std::cout << GREEN << "Intern creates presidential pardon form" << END << std::endl;
	return ( new PresidentialPardonForm( target ) );
}

AForm	*Intern::RobotomyForm( std::string target )
{
	std::cout << GREEN << "Intern creates robotomy request form" << END << std::endl;
	return ( new RobotomyRequestForm( target ) );

}

AForm	*Intern::ShrubberyForm( std::string target )
{
	std::cout << GREEN << "Intern creates shrubbery creation form" << END << std::endl;
	return ( new ShrubberyCreationForm( target ) );

}

AForm	*Intern::makeForm( std::string form_name, std::string form_target )
{
	Intern	random;

	const t_options list[] = {{ "presidential pardon", &Intern::PresidentialForm }, \
							{ "robotomy request", &Intern::RobotomyForm}, \
							{ "shrubbery creation", &Intern::ShrubberyForm}};

	for ( int i = 0; i < 3; i++ )
	{
		if ( form_name == list[i].keyWord )
			return ((random.*(list[i].Function))(form_target));
	}
	throw AForm::FormNotFoundException( );
	return ( NULL );
}
