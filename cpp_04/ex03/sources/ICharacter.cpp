/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:52:06 by twang             #+#    #+#             */
/*   Updated: 2023/11/09 11:43:02 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

/*---- constructors & destructor ---------------------------------------------*/

ICharacter::ICharacter( void )
{
	// std::cout << GREY << D_CONSTRUCTOR << " ~ from ICharacter." << END << std::endl;
}

ICharacter::ICharacter( ICharacter const & copy )
{
	( void )copy;
	// std::cout << GREY << C_CONSTRUCTOR << " ~ from ICharacter." << END << std::endl;
}

ICharacter::~ICharacter( void )
{
	// std::cout << GREY << DESTRUCTOR << " ~ from ICharacter." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

ICharacter &	ICharacter::operator=( ICharacter const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}
