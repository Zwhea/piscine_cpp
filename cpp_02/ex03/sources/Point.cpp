/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:20:46 by wangthea          #+#    #+#             */
/*   Updated: 2023/11/01 20:32:15 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*---- constructors & destructor ---------------------------------------------*/

Point::Point( void ) : x( 0 ), y( 0 )
{
	return ;
}

Point::Point( float const x, float const y ) : x( x ), y( y )
{
	return ;
}

Point::Point( Point const & copy )
{
	x = copy.x;
	y = copy.y;

	return ;
}

Point::~Point()
{
	return ;
}

/*---- operator overload -----------------------------------------------------*/

Fixed &	Fixed::operator=( Fixed const & op_copy )
{
	if ( this != &op_copy )
		raw_bits = op_copy.getRawBits();

	return ( *this );
}

/*---- functions -------------------------------------------------------------*/
