/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:21 by twang             #+#    #+#             */
/*   Updated: 2023/11/13 15:57:14 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Intern::Intern( void )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from Intern." << END << std::endl;
}

Intern::Intern( Intern const & copy )
{
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from Intern." << END << std::endl;
}

Intern::~Intern( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from Intern." << END << std::endl;
}

/*---- overload operators ----------------------------------------------------*/

Intern &	Intern::operator=( Intern const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

std::ostream &	operator<<( std::ostream & os, Intern const & target )
{
	os << BLUE << "Intern's name : " << END;
	os << target.getName( );
	os << BLUE << "\t-> grade : " << END;
	os << target.getGrade( );
	os << std::endl;

	return ( os );
}
