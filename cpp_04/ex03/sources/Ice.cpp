/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:49:34 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 16:38:16 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Ice::Ice( void ) : AMateria( "ice" )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Ice." << END << std::endl;
}

Ice::Ice( Ice const & copy ): AMateria( "ice" )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Ice." << END << std::endl;
}

Ice::~Ice( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Ice." << END << std::endl;
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
	return( NULL );
}

void		Ice::use( ICharacter& target )
{
	( void )target;
	std::cout << "use" << std::endl;
}
