/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:23:33 by twang             #+#    #+#             */
/*   Updated: 2023/11/08 09:18:39 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*---- constructors & destructor ---------------------------------------------*/

A_Animal::A_Animal( void ) : type( "Undefined" )
{
	std::cout << GREY << D_CONSTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

A_Animal::A_Animal( std::string new_type ) : type( new_type )
{
	std::cout << GREY << type << CONSTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

A_Animal::A_Animal( A_Animal const & copy ) : type( copy.type )
{
	std::cout << GREY << C_CONSTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

A_Animal::~A_Animal( void )
{
	std::cout << GREY << DESTRUCTOR << " ~ from A_Animal." << END << std::endl;
}

/*---- affectation operator overloading --------------------------------------*/

A_Animal	&	A_Animal::operator=( A_Animal const & right_value )
{
	if ( this == &right_value )
		return ( *this );

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

std::string	A_Animal::getType( void ) const
{
	return ( type );
}
