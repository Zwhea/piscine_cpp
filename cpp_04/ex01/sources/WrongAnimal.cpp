/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:36:22 by twang             #+#    #+#             */
/*   Updated: 2023/11/07 13:12:01 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*---- constructors & destructor ---------------------------------------------*/

WrongAnimal::WrongAnimal( void ) : type( "Undefined" )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from WrongAnimal." << END << std::endl;
}

WrongAnimal::WrongAnimal( std::string new_type ) : type( new_type )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from WrongAnimal." << END << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & copy ) : type( copy.type )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from WrongAnimal." << END << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from WrongAnimal." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

WrongAnimal	&	WrongAnimal::operator=( WrongAnimal const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

std::string	WrongAnimal::getType( void ) const
{
	return ( type );
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << PURPLE << "Hey, I am a Wrong Animal & I am making a wrong sound yo..." << END << std::endl;
}

