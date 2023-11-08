/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:13:15 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 17:03:38 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*---- constructors & destructor ---------------------------------------------*/

AMateria::AMateria( void ) : type( "Undefined" )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from AMateria." << END << std::endl;
}

AMateria::AMateria( std::string const & new_type ) : type( new_type )
{
	std::cout << GREY << type << CONSTRUCTOR << " ~ from AMateria." << END << std::endl;
}

AMateria::AMateria( AMateria const & copy ) : type( copy.type )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from AMateria." << END << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from AMateria." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

AMateria	&	AMateria::operator=( AMateria const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- getters & setters -----------------------------------------------------*/

std::string	const & AMateria::getType( void ) const
{
	return ( type );
}

/*---- functions -------------------------------------------------------------*/

void	AMateria::use( ICharacter& target )
{
	std::cout << PURPLE;
	std::cout << type << " : \"is doing nothing to ";
	std::cout << target.getName( ) << " \"" << END << std::endl;
}