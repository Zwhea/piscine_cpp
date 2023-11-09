/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:49:34 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 11:41:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Ice::Ice( void ) : AMateria( "ice" )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from Ice." << END << std::endl;
}

Ice::Ice( Ice const & copy ): AMateria( "ice" )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Ice." << END << std::endl;
}

Ice::~Ice( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from Ice." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Ice	&	Ice::operator=( Ice const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

AMateria*	Ice::clone( void ) const
{
	AMateria* clone = new Ice( );

	return( clone );
}

void		Ice::use( ICharacter& target )
{
	std::cout << BLUE;
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName( ) << " *" << END << std::endl;
}
