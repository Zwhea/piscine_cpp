/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:50:29 by twang             #+#    #+#             */
/*   Updated: 2023/11/16 17:25:20 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Serializer::Serializer( void )
{
	
}

Serializer::Serializer( Serializer const & copy )
{
	( void )copy;
}

Serializer::~Serializer( void )
{
	
}

/*---- overload operators ----------------------------------------------------*/

Serializer & Serializer::operator=( Serializer const & right_value )
{
	( void )right_value;

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/

uintptr_t	Serializer::serialize( Data *ptr )
{
	uintptr_t	u_i = reinterpret_cast< uintptr_t >( ptr );

	return ( u_i );
}

Data*		Serializer::deserialize( uintptr_t raw )
{
	Data	*Data = reinterpret_cast< ::Data * >( raw );

	return ( Data );
}
