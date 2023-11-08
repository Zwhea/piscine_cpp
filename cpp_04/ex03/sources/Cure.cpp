/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:31:07 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 16:49:24 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Cure::Cure( void ) : AMateria( "cure" )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from Cure." << END << std::endl;
}

Cure::Cure( Cure const & copy ) : AMateria( "cure" )
{
	( void )copy;
	std::cout << GREY << C_CONSTRUCTOR << " ~ from Cure." << END << std::endl;
}

Cure::~Cure( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from Cure." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

Cure	&	Cure::operator=( Cure const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

AMateria*	Cure::clone( void ) const
{
	return( NULL );
}

void		Cure::use( ICharacter& target )
{
	std::cout << GREEN;
	std::cout << type << " : \"* shoots an ice bolt at ";
	std::cout << target.getName( ) << " \"" << END << std::endl;
}
